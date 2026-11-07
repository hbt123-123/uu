// rea decompile_all
// name: FUN_100011e08
// address: 0x100011e08
// body: available
// range: 0x100011e08-0x100011f83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100011eb8 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100011e08(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0xd8);
  if ((*(byte *)(unaff_x20 + 0xf4) & 1) != 0) {
    lVar5 = *(long *)(unaff_x20 + 0xf8);
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      _swift_retain(lVar5);
      __s8Dispatch0A8WorkItemC6cancelyyFTj();
      _swift_release(lVar5);
      uVar6 = *(undefined8 *)(unaff_x20 + 0xf8);
    }
    *(undefined8 *)(unaff_x20 + 0xf8) = 0;
    _swift_release(uVar6);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar3 = *(undefined4 *)(unaff_x20 + 0xf0);
  uVar1 = *(undefined4 *)(unaff_x20 + 0xe8);
  uVar2 = *(undefined4 *)(unaff_x20 + 0xec);
  lVar5 = *(long *)(unaff_x20 + 0xf8);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    _swift_retain(lVar5);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar5);
    uVar4 = *(undefined8 *)(unaff_x20 + 0xf8);
  }
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  _swift_release(uVar4);
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined4 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined1 *)(unaff_x20 + 0xf4) = 1;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_90 = uVar6;
  uStack_88 = uVar7;
  local_80 = uVar1;
  uStack_7c = uVar2;
  local_78 = uVar3;
  local_70 = param_1;
  uStack_68 = param_2;
  FUN_1003fb48c(FUN_10003f71c,auStack_a0,0xd0000000000000a9,0x8000000100877660,0xd000000000000029,
                0x80000001008785a0,0x7aa,0);
  return;
}

