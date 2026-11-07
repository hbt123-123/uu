// rea decompile_all
// name: FUN_1001321c0
// address: 0x1001321c0
// body: available
// range: 0x1001321c0-0x100132337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1001321c0(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  class_t *self;
  ID self_00;
  long *unaff_x20;
  ulong uVar4;
  
  if (((*unaff_x20 == 2) || ((*unaff_x20 == 1 && (unaff_x20[10] != 1)))) &&
     ((ulong)unaff_x20[1] < 3)) {
    uVar4 = unaff_x20[2];
    uVar3 = unaff_x20[3];
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar2 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar1 = 1;
      if (unaff_x20[1] == 2) {
        uVar1 = 2;
      }
      self = &objc::class_t::StreamerProxyConfig;
      _objc_allocWithZone();
      self_00 = _objc_msgSend((ID)self,"init");
      _objc_msgSend(self_00,"setType:",uVar1);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,uVar3);
      _objc_msgSend(self_00,"setHost:",uVar4);
      _objc_msgSend(self_00,"setPort:",unaff_x20[4]);
      uVar4 = unaff_x20[5];
      uVar2 = uVar4 & 0xffffffffffff;
      if ((unaff_x20[6] & 0x2000000000000000U) != 0) {
        uVar2 = (ulong)unaff_x20[6] >> 0x38 & 0xf;
      }
      if (uVar2 == 0) {
        uVar4 = 0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      }
      _objc_msgSend(self_00,"setUsername:",uVar4);
      uVar4 = unaff_x20[7];
      uVar2 = uVar4 & 0xffffffffffff;
      if ((unaff_x20[8] & 0x2000000000000000U) != 0) {
        uVar2 = (ulong)unaff_x20[8] >> 0x38 & 0xf;
      }
      if (uVar2 == 0) {
        uVar4 = 0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      }
      _objc_msgSend(self_00,"setPassword:",uVar4);
      return self_00;
    }
  }
  return 0;
}

