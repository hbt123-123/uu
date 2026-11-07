// rea decompile_all
// name: FUN_1000bb1e8
// address: 0x1000bb1e8
// body: available
// range: 0x1000bb1e8-0x1000bb347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000bb344 to 0x1000c2050 FUN_1000c2050 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000bb1e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  long unaff_x20;
  
  FUN_1000c14a8();
  cVar5 = *(char *)(unaff_x20 + 0x90);
  if (cVar5 != -1) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x88);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
    FUN_1000b8338(uVar2,uVar4,uVar1,uVar3,cVar5);
    FUN_1000b6a2c(param_1,param_2);
    FUN_1000c2050(uVar2,uVar4,uVar1,uVar3,cVar5);
  }
  cVar5 = *(char *)(unaff_x20 + 0xb8);
  if (cVar5 == -1) {
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
    uVar3 = *(undefined8 *)(unaff_x20 + 0xb0);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x98);
    uVar4 = *(undefined8 *)(unaff_x20 + 0xa0);
    FUN_1000b8338(uVar2,uVar4,uVar1,uVar3,cVar5);
    FUN_1000b6a2c(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    FUN_1000c2050(uVar2,uVar4,uVar1,uVar3,cVar5);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  uVar6 = *(undefined1 *)(unaff_x20 + 0x90);
  *(undefined1 *)(unaff_x20 + 0x90) = 0xff;
  FUN_1000c2050(uVar1,uVar3,uVar2,uVar4,uVar6);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  uVar6 = *(undefined1 *)(unaff_x20 + 0xb8);
  *(undefined1 *)(unaff_x20 + 0xb8) = 0xff;
  FUN_1000c2050(uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}

