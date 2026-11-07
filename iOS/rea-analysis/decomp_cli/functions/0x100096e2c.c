// rea decompile_all
// name: FUN_100096e2c
// address: 0x100096e2c
// body: available
// range: 0x100096e2c-0x100096fdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100096e2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_90 [16];
  undefined **local_80;
  undefined *local_70;
  undefined8 uStack_68;
  
  local_70 = (undefined *)0x2e;
  uStack_68 = 0xe100000000000000;
  local_80 = &local_70;
  lVar5 = 0x7fffffffffffffff;
  FUN_10005b0a4(0x7fffffffffffffff,1,FUN_100096fdc,auStack_90,param_1,param_2);
  uVar10 = *(ulong *)(lVar5 + 0x10);
  if (uVar10 == 0) {
    _swift_bridgeObjectRelease(lVar5);
    puVar9 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    local_70 = PTR___swiftEmptyArrayStorage_1000f0740;
    FUN_1000798d0(0,uVar10,0);
    uVar11 = 0;
    puVar12 = (undefined8 *)(lVar5 + 0x38);
    do {
      puVar9 = local_70;
      if (*(ulong *)(lVar5 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100096fdc);
        (*pcVar4)();
      }
      uVar6 = puVar12[-3];
      uVar7 = puVar12[-2];
      uVar1 = puVar12[-1];
      uVar3 = *puVar12;
      _swift_bridgeObjectRetain(uVar3);
      __sSS14_fromSubstringySSSshFZ(uVar6,uVar7,uVar1,uVar3);
      _swift_bridgeObjectRelease(uVar3);
      uVar2 = *(ulong *)(puVar9 + 0x10);
      local_70 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
        FUN_1000798d0(1 < *(ulong *)(puVar9 + 0x18),uVar2 + 1,1);
      }
      puVar9 = local_70;
      uVar11 = uVar11 + 1;
      *(ulong *)(local_70 + 0x10) = uVar2 + 1;
      *(undefined8 *)(local_70 + uVar2 * 0x10 + 0x20) = uVar6;
      *(undefined8 *)(local_70 + uVar2 * 0x10 + 0x28) = uVar7;
      puVar12 = puVar12 + 4;
    } while (uVar10 != uVar11);
    _swift_bridgeObjectRelease(lVar5);
  }
  plVar8 = (long *)(puVar9 + 0x10);
  if (*plVar8 == 0) {
    _swift_bridgeObjectRelease(puVar9);
    lVar5 = 0;
  }
  else {
    lVar5 = plVar8[*plVar8 * 2];
    _swift_bridgeObjectRetain((plVar8 + *plVar8 * 2)[1]);
    FUN_10009684c(1,puVar9);
  }
  return lVar5;
}

