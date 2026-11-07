// rea decompile_all
// name: FUN_10059a760
// address: 0x10059a760
// body: available
// range: 0x10059a760-0x10059a7ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10059a760(void)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar1 = unaff_x20[4];
  uVar5 = unaff_x20[5];
  uVar2 = unaff_x20[6];
  uVar7 = unaff_x20[7];
  FUN_100510c38();
  if ((uVar4 & 1) == 0) {
LAB_10059a7e8:
    uVar3 = 0;
  }
  else {
    if (uVar2 != 0) {
      FUN_100008184(uVar1,uVar5);
      uVar4 = uVar2;
      _swift_bridgeObjectRetain();
      FUN_100510c38();
      FUN_100541944(uVar1,uVar5,uVar2,uVar7);
      if ((uVar4 & 1) == 0) goto LAB_10059a7e8;
    }
    FUN_10056a264(uVar6);
    uVar5 = uVar6;
    FUN_100525d70();
    _swift_bridgeObjectRelease(uVar6);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}

