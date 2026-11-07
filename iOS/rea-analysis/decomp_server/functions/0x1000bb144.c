// rea decompile_all
// name: FUN_1000bb144
// address: 0x1000bb144
// body: available
// range: 0x1000bb144-0x1000bb1bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000bb1b8 to 0x1000c2050 FUN_1000c2050 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000bb144(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  
  FUN_1003b2720();
  lVar8 = *param_1;
  lVar7 = lVar8;
  _swift_retain();
  FUN_10039a5f0();
  _swift_release(lVar8);
  uVar1 = 0x31;
  if (lVar7 != 2) {
    uVar1 = 0x32;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x80) = 0x6f747561;
  *(undefined8 *)(unaff_x20 + 0x78) = 0xe100000000000000;
  *(undefined8 *)(unaff_x20 + 0x88) = 0xe400000000000000;
  uVar6 = *(undefined1 *)(unaff_x20 + 0x90);
  *(undefined1 *)(unaff_x20 + 0x90) = 0;
  FUN_1000c2050(uVar2,uVar4,uVar3,uVar5,uVar6);
  return;
}

