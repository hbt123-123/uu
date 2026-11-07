// rea decompile_all
// name: FUN_1003386f8
// address: 0x1003386f8
// body: available
// range: 0x1003386f8-0x10033886b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003387ec to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003386f8(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  
  uVar1 = 0;
  uVar5 = param_2;
  FUN_100278198();
  puVar8 = &stack0xffffffffffffffa0 +
           -(*(long *)(*(long *)(uVar1 - 8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = uVar1;
  __s10Foundation3URLV17lastPathComponentSSvg();
  uVar3 = uVar2;
  uVar6 = uVar5;
  __s10Foundation3URLV13pathExtensionSSvg();
  uVar7 = uVar2 & 0xffffffffffff;
  if ((uVar5 & 0x2000000000000000) != 0) {
    uVar7 = uVar5 >> 0x38 & 0xf;
  }
  if (uVar7 != 0) {
    uVar7 = uVar3 & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar7 = uVar6 >> 0x38 & 0xf;
    }
    if (uVar7 != 0) {
      uVar7 = uVar6;
      FUN_10033ae98();
      _swift_bridgeObjectRelease(uVar6);
      FUN_10033886c(param_1,param_2,param_3,uVar2,uVar5,uVar3,uVar7);
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uVar5);
      return;
    }
  }
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar6);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(puVar8,param_1,lVar4);
  _swift_storeEnumTagMultiPayload(puVar8,uVar1,1);
  FUN_100339c3c(puVar8);
  FUN_1000d27dc(puVar8,FUN_100278198);
  return;
}

