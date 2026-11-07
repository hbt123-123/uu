// rea decompile_all
// name: FUN_100073950
// address: 0x100073950
// body: available
// range: 0x100073950-0x100073b63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100073950(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((long)uVar10 < 0x40) {
    uVar13 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_1 + 0x40);
  pcVar5 = param_2;
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  lVar14 = 0;
  while( true ) {
    while (uVar13 != 0) {
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar14 << 6;
      local_90[0] = *(undefined4 *)(*(long *)(param_1 + 0x30) + uVar8 * 4);
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar8 * 0x10);
      uStack_80 = puVar1[1];
      local_88 = *puVar1;
      (*param_2)(local_78,local_90);
      uVar4 = uStack_68;
      uVar3 = local_70;
      uVar2 = local_78[0];
      uVar15 = (ulong)local_78[0];
      lVar12 = *param_5;
      uVar8 = uVar15;
      thunk_FUN_1001a2c34();
      lVar9 = *(long *)(lVar12 + 0x10);
      uVar11 = (ulong)~(uint)pcVar5 & 1;
      if (SCARRY8(lVar9,uVar11)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100073b50);
        (*pcVar5)();
      }
      if (*(long *)(lVar12 + 0x18) < (long)(lVar9 + uVar11)) {
        pcVar7 = (code *)(ulong)(param_4 & 1);
        FUN_10006738c();
        thunk_FUN_1001a2c34();
        if (((uint)pcVar5 & 1) != ((uint)pcVar7 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___ss6UInt32VN_100995dc0);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100073b64);
          (*pcVar5)();
        }
      }
      else {
        pcVar7 = pcVar5;
        uVar15 = uVar8;
        if ((param_4 & 1) == 0) {
          FUN_100063524();
        }
      }
      uVar13 = uVar13 - 1 & uVar13;
      param_4 = 1;
      uVar8 = (ulong)pcVar5 & 1;
      pcVar5 = pcVar7;
      if (uVar8 == 0) {
        lVar12 = *param_5;
        lVar9 = lVar12 + (uVar15 >> 6) * 8;
        *(ulong *)(lVar9 + 0x40) = *(ulong *)(lVar9 + 0x40) | 1L << (uVar15 & 0x3f);
        *(uint *)(*(long *)(lVar12 + 0x30) + uVar15 * 4) = uVar2;
        puVar1 = (undefined8 *)(*(long *)(lVar12 + 0x38) + uVar15 * 0x10);
        puVar1[1] = uVar4;
        *puVar1 = uVar3;
        if (SCARRY8(*(long *)(lVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100073b54);
          (*pcVar5)();
        }
        *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
      }
    }
    bVar6 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100073b4c);
      (*pcVar5)();
    }
    if ((long)(uVar10 + 0x3f >> 6) <= lVar14) break;
    uVar13 = ((ulong *)(param_1 + 0x40))[lVar14];
  }
  _swift_release_n(param_3,2);
  _swift_bridgeObjectRelease(param_1);
  _swift_release(param_1);
  return;
}

