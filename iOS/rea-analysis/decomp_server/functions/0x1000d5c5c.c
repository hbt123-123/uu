// rea decompile_all
// name: FUN_1000d5c5c
// address: 0x1000d5c5c
// body: available
// range: 0x1000d5c5c-0x1000d5e77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined ** FUN_1000d5c5c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x12;
  code *pcVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long local_b0;
  code *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar2 + -8);
  local_90 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar11 - extraout_x12;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    _swift_bridgeObjectRelease(param_1);
    puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    local_88 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10006fae0(0,lVar2,0);
    lVar14 = param_1 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
    local_a0 = *(long *)(lVar10 + 0x48);
    local_a8 = *(code **)(lVar10 + 0x10);
    local_b0 = param_1;
    local_98 = lVar10;
    do {
      puVar13 = local_88;
      lVar10 = local_90;
      lVar3 = lVar12;
      lVar7 = lVar14;
      (*local_a8)(lVar12,lVar14,local_90);
      __s10Foundation3URLV016standardizedFileB0ACvg(lVar11);
      __s10Foundation3URLV4pathSSvg();
      pcVar8 = *(code **)(local_98 + 8);
      (*pcVar8)(lVar11,lVar10);
      (*pcVar8)(lVar12,lVar10);
      uVar1 = *(ulong *)(puVar13 + 0x10);
      local_88 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
        FUN_10006fae0(1 < *(ulong *)(puVar13 + 0x18),uVar1 + 1,1);
      }
      puVar13 = local_88;
      *(ulong *)(local_88 + 0x10) = uVar1 + 1;
      *(long *)(local_88 + uVar1 * 0x10 + 0x20) = lVar3;
      *(long *)(local_88 + uVar1 * 0x10 + 0x28) = lVar7;
      lVar14 = lVar14 + local_a0;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    _swift_bridgeObjectRelease(local_b0);
  }
  puVar4 = puVar13;
  FUN_100074e04();
  _swift_bridgeObjectRelease(puVar13);
  ppuVar9 = *(undefined ***)(puVar4 + 0x10);
  if (ppuVar9 == (undefined **)0x0) {
    _swift_bridgeObjectRelease(puVar4);
    ppuVar5 = (undefined **)PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    ppuVar5 = ppuVar9;
    FUN_10006d56c(ppuVar9,0);
    ppuVar6 = &local_88;
    FUN_100073eb8(ppuVar6,ppuVar5 + 4,ppuVar9,puVar4);
    FUN_10003f638(local_88,uStack_80,local_78,uStack_70,local_68);
    if (ppuVar6 != ppuVar9) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1000d5e44);
      (*pcVar8)();
    }
  }
  return ppuVar5;
}

