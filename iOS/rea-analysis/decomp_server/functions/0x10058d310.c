// rea decompile_all
// name: FUN_10058d310
// address: 0x10058d310
// body: available
// range: 0x10058d310-0x10058d3af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10058d310(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar2 = unaff_x20[3];
  FUN_100510c38();
  if ((uVar2 & 1) == 0) {
LAB_10058d398:
    uVar1 = 0;
  }
  else {
    uVar2 = unaff_x20[6];
    if (uVar2 != 0) {
      uVar6 = unaff_x20[7];
      uVar5 = unaff_x20[4];
      uVar4 = unaff_x20[5];
      FUN_100008184(uVar5,uVar4);
      uVar3 = uVar2;
      _swift_bridgeObjectRetain();
      FUN_100510c38();
      FUN_100541944(uVar5,uVar4,uVar2,uVar6);
      if ((uVar3 & 1) == 0) goto LAB_10058d398;
    }
    uVar4 = *unaff_x20;
    FUN_10056a264(uVar4);
    uVar5 = uVar4;
    FUN_100525d70();
    _swift_bridgeObjectRelease(uVar4);
    uVar1 = (uint)uVar5 & 1;
  }
  return uVar1;
}

