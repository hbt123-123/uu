// rea decompile_all
// name: FUN_1000a63d0
// address: 0x1000a63d0
// body: available
// range: 0x1000a63d0-0x1000a64b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000a63d0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  undefined1 auVar7 [16];
  
  lVar1 = *unaff_x20;
  lVar3 = unaff_x20[1];
  lVar4 = lVar1;
  if ((char)unaff_x20[2] == '\0') {
    _swift_bridgeObjectRetain();
    lVar5 = lVar3;
  }
  else if ((char)unaff_x20[2] == '\x01') {
    _swift_bridgeObjectRetain();
    __sSS6appendyySSF(0x6d6d6f6362755320,0xec00000073646e61);
    lVar5 = lVar3;
  }
  else {
    lVar6 = -0x14ffffffff8c9b92;
    lVar2 = 0x616d6d6f63627553;
    if (lVar1 != 1 || lVar3 != 0) {
      lVar6 = -0x1900000000000000;
      lVar2 = 0x736e6f6974704f;
    }
    lVar4 = 0x746e656d75677241;
    lVar5 = -0x16ffffffffffff8d;
    if (lVar1 != 0 || lVar3 != 0) {
      lVar4 = lVar2;
      lVar5 = lVar6;
    }
  }
  auVar7._8_8_ = lVar5;
  auVar7._0_8_ = lVar4;
  return auVar7;
}

