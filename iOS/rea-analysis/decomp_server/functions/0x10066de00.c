// rea decompile_all
// name: FUN_10066de00
// address: 0x10066de00
// body: available
// range: 0x10066de00-0x10066df4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10066de00(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = param_2;
  if (param_3 == 0) {
    thunk_FUN_1006654ec();
    FUN_10064c630();
    uVar2 = uVar1;
    uVar4 = param_3;
    uVar5 = param_4;
    thunk_FUN_1006654ec(param_2);
    FUN_10064c630();
    _swift_allocObject();
    uVar8 = 0;
    uVar7 = 0;
    uVar9 = 0;
    uVar6 = 0;
    uVar3 = param_3;
  }
  else {
    uVar3 = param_3;
    thunk_FUN_1006654ec();
    FUN_10064c630();
    uVar2 = uVar1;
    uVar4 = uVar3;
    uVar5 = param_4;
    thunk_FUN_1006654ec(param_2);
    FUN_10064c630();
    uVar8 = uVar2;
    uVar6 = uVar4;
    uVar9 = uVar5;
    thunk_FUN_1006654ec();
    FUN_10064c630();
    uVar6 = uVar6 & 0xff;
    _swift_allocObject();
    uVar3 = uVar3 & 0xffffffff;
    uVar7 = param_3;
  }
  FUN_10066dd44(param_1,uVar1,uVar3,param_4,param_2,uVar2,uVar4,uVar5,uVar7,uVar8,uVar6,uVar9);
  return unaff_x20;
}

