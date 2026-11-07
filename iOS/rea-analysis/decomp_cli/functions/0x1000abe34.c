// rea decompile_all
// name: FUN_1000abe34
// address: 0x1000abe34
// body: available
// range: 0x1000abe34-0x1000abff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000abe34(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[1];
  if ((char)unaff_x20[6] == '\0') {
    _swift_bridgeObjectRetain(uVar4);
    param_1 = uVar2;
    param_2 = uVar4;
  }
  else if ((char)unaff_x20[6] == '\x01') {
    uVar3 = unaff_x20[2];
    uVar5 = unaff_x20[3];
    uVar6 = unaff_x20[5];
    uVar1 = unaff_x20[4] & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar1 = uVar6 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      uVar8 = 0;
      uVar7 = 0xe000000000000000;
    }
    else {
      __sSS6appendyySSF(unaff_x20[4],uVar6);
      __sSS6appendyySSF(10,0xe100000000000000);
      uVar8 = 0x20203a706c6548;
      uVar7 = 0xe700000000000000;
    }
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar1 = uVar4 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      param_2 = 0xe000000000000000;
      param_1 = 0;
    }
    else {
      (**(code **)(param_2 + 0x28))();
      __sSS6appendyySSF(uVar2,uVar4);
      __sSS6appendyySSF(10,0xe100000000000000);
    }
    _swift_bridgeObjectRetain(param_2);
    __sSS6appendyySSF(uVar8,uVar7);
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRetain(param_2);
    __sSS6appendyySSF(uVar3,uVar5);
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar1 = uVar4 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      param_1 = 0;
      param_2 = 0xe000000000000000;
    }
    else {
      (**(code **)(param_2 + 0x28))();
      __sSS6appendyySSF(uVar2,uVar4);
    }
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  return auVar9;
}

