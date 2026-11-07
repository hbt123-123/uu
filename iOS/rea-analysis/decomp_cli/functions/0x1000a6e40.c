// rea decompile_all
// name: FUN_1000a6e40
// address: 0x1000a6e40
// body: available
// range: 0x1000a6e40-0x1000a6fff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000a6e40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_70 [16];
  long *local_60;
  long local_50;
  undefined8 uStack_48;
  
  local_50 = 10;
  uStack_48 = 0xe100000000000000;
  local_60 = &local_50;
  _swift_bridgeObjectRetain(param_3);
  lVar4 = 1;
  FUN_10005b0a4(1,0,FUN_100096fdc,auStack_70,param_2,param_3);
  if (*(long *)(lVar4 + 0x10) == 2) {
    lVar8 = *(long *)(lVar4 + 0x20);
    uVar9 = *(undefined8 *)(lVar4 + 0x28);
    uVar10 = *(undefined8 *)(lVar4 + 0x30);
    uVar1 = *(undefined8 *)(lVar4 + 0x38);
    _swift_bridgeObjectRetain(uVar1);
    __sSS14_fromSubstringySSSshFZ(lVar8,uVar9,uVar10,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    local_50 = lVar8;
    uStack_48 = uVar9;
    __sSS6appendyySSF(10,0xe100000000000000);
    if (*(ulong *)(lVar4 + 0x10) < 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a7000);
      (*pcVar3)();
    }
    uVar10 = *(undefined8 *)(lVar4 + 0x40);
    uVar1 = *(undefined8 *)(lVar4 + 0x48);
    uVar9 = *(undefined8 *)(lVar4 + 0x50);
    uVar2 = *(undefined8 *)(lVar4 + 0x58);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRelease(lVar4);
    FUN_100058580(param_1,uVar10,uVar1,uVar9,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    __sSS6appendyySSF(param_1,uVar10);
    _swift_bridgeObjectRelease(uVar10);
    lVar8 = local_50;
    uVar10 = uStack_48;
  }
  else {
    puVar5 = &DAT_100103f48;
    local_50 = lVar4;
    FUN_10000eb08(&DAT_100103f48,&DAT_1000d39e8);
    puVar6 = &DAT_100103f50;
    FUN_10002cf3c(&DAT_100103f50,&DAT_100103f48,&DAT_1000d39e8,PTR___sSayxGSTsMc_1000f0380);
    puVar7 = puVar6;
    FUN_10005b85c();
    lVar8 = 0;
    uVar10 = 0xe000000000000000;
    __sSTsSy7ElementRpzrlE6joined9separatorS2S_tF(0,0xe000000000000000,puVar5,puVar6,puVar7);
    _swift_bridgeObjectRelease(lVar4);
  }
  auVar11._8_8_ = uVar10;
  auVar11._0_8_ = lVar8;
  return auVar11;
}

