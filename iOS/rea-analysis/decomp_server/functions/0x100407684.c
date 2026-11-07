// rea decompile_all
// name: FUN_100407684
// address: 0x100407684
// body: available
// range: 0x100407684-0x1004077b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100407684(void)

{
  uint *puVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  ulong local_38;
  
  pcVar2 = "IOPlatformExpertDevice";
  _IOServiceMatching("IOPlatformExpertDevice");
  uVar3 = 0;
  __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(0xc,0,0);
  puVar1 = (uint *)PTR__kIOMainPortDefault_100995600;
  if ((uVar3 & 1) == 0) {
    puVar1 = (uint *)PTR__kIOMasterPortDefault_100995608;
  }
  uVar6 = (ulong)*puVar1;
  _IOServiceGetMatchingService(uVar6,pcVar2);
  uVar4 = 0x6f6674616c504f49;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6f6674616c504f49,0xee00444955556d72);
  uVar3 = uVar6;
  _IORegistryEntryCreateCFProperty(uVar6,uVar4,*(undefined8 *)PTR__kCFAllocatorDefault_1009953c8,0);
  _IOObjectRelease(uVar6);
  if (uVar3 != 0) {
    _swift_unknownObjectRetain(uVar3);
    puVar5 = &local_48;
    local_38 = uVar3;
    _swift_dynamicCast(puVar5,&local_38,PTR___syXlN_100995e80 + 8,PTR___sSSN_1009957f8,6);
    if (((ulong)puVar5 & 1) != 0) goto LAB_1004077a0;
  }
  local_48 = 0;
  uStack_40 = 0;
LAB_1004077a0:
  auVar7._8_8_ = uStack_40;
  auVar7._0_8_ = local_48;
  return auVar7;
}

