// rea decompile_all
// name: FUN_100412328
// address: 0x100412328
// body: available
// range: 0x100412328-0x10041265f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100412328(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  ulong local_d0;
  ulong local_c8;
  undefined1 auStack_c0 [32];
  long local_a0;
  ulong *puStack_98;
  ulong local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar6 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  local_90 = ~uVar6;
  puStack_98 = (ulong *)(param_1 + 0x40);
  uVar6 = -uVar6;
  local_80 = 0xffffffffffffffff;
  if ((long)uVar6 < 0x40) {
    local_80 = ~(-1L << (uVar6 & 0x3f));
  }
  uStack_88 = 0;
  local_80 = local_80 & *puStack_98;
  local_a0 = param_1;
  uStack_78 = param_2;
  local_70 = param_3;
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  FUN_100411740(&local_d0);
  uVar2 = local_c8;
  uVar6 = local_d0;
  if (local_c8 == 0) goto LAB_10041261c;
  FUN_10007f3d4(auStack_c0,auStack_f0);
  lVar9 = *param_5;
  uVar4 = uVar6;
  uVar5 = uVar2;
  FUN_1001a2c70();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar10 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
LAB_100412658:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10041265c);
    (*pcVar3)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar10) {
    FUN_1000675f0(lVar10,param_4 & 1);
    uVar4 = uVar6;
    uVar8 = uVar2;
    FUN_1001a2c70();
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_10041242c:
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10041243c);
      (*pcVar3)();
    }
LAB_100412440:
    if ((uVar5 & 1) != 0) goto LAB_100412444;
LAB_10041249c:
    lVar7 = *param_5;
    lVar10 = lVar7 + (uVar4 >> 6) * 8;
    *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
    *puVar1 = uVar6;
    puVar1[1] = uVar2;
    FUN_10007f3d4(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_10041265c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100412660);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  }
  else {
    if ((param_4 & 1) != 0) goto LAB_100412440;
    FUN_100063670();
    if ((uVar5 & 1) == 0) goto LAB_10041249c;
LAB_100412444:
    lVar10 = *param_5;
    FUN_10003e8bc(auStack_f0,auStack_110);
    _swift_bridgeObjectRelease(uVar2);
    FUN_10003f094(auStack_f0);
    lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
    FUN_10003f094(lVar10);
    FUN_10007f3d4(auStack_110,lVar10);
  }
  FUN_100411740(&local_d0);
  uVar6 = local_d0;
  uVar2 = local_c8;
  while (uVar2 != 0) {
    local_d0 = uVar6;
    local_c8 = uVar2;
    FUN_10007f3d4(auStack_c0,auStack_f0);
    lVar9 = *param_5;
    uVar4 = uVar6;
    uVar5 = uVar2;
    FUN_1001a2c70();
    lVar7 = *(long *)(lVar9 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar10 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) goto LAB_100412658;
    if (*(long *)(lVar9 + 0x18) < lVar10) {
      FUN_1000675f0(lVar10,1);
      uVar4 = uVar6;
      uVar8 = uVar2;
      FUN_1001a2c70();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) goto LAB_10041242c;
    }
    if ((uVar5 & 1) == 0) {
      lVar7 = *param_5;
      lVar10 = lVar7 + (uVar4 >> 6) * 8;
      *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
      *puVar1 = uVar6;
      puVar1[1] = uVar2;
      FUN_10007f3d4(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_10041265c;
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    }
    else {
      lVar10 = *param_5;
      FUN_10003e8bc(auStack_f0,auStack_110);
      _swift_bridgeObjectRelease(uVar2);
      FUN_10003f094(auStack_f0);
      lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
      FUN_10003f094(lVar10);
      FUN_10007f3d4(auStack_110,lVar10);
    }
    FUN_100411740(&local_d0);
    uVar6 = local_d0;
    uVar2 = local_c8;
  }
LAB_10041261c:
  FUN_10003f638(local_a0,puStack_98,local_90,uStack_88,local_80);
  _swift_release(param_3);
  return;
}

