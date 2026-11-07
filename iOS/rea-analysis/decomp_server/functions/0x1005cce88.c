// rea decompile_all
// name: FUN_1005cce88
// address: 0x1005cce88
// body: available
// range: 0x1005cce88-0x1005ccf9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005cce88(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ID self;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  iVar4 = (int)*(undefined8 *)(unaff_x20 + _TtC12NRDSecureLog12SecureLogger::handle);
  FUN_1005ceba0();
  if (iVar4 != 0) {
    lVar1 = unaff_x20 + _TtC12NRDSecureLog12SecureLogger::configuration;
    lVar5 = 0;
    FUN_1005c8c98();
    puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar5 + 0x18));
    uVar3 = *puVar2;
    uVar6 = puVar2[1];
    if (DAT_100aad4f8 != -1) {
      _swift_once(&DAT_100aad4f8,FUN_1005cb710);
    }
    self = DAT_100aad738;
    _objc_msgSend(DAT_100aad738,"lock");
    if (DAT_100aad500 != -1) {
      _swift_once(&DAT_100aad500,FUN_1005cb740);
    }
    _swift_beginAccess(&DAT_100aad740,auStack_48,0x21,0);
    FUN_1005cdc28(uVar3,uVar6);
    _swift_endAccess(auStack_48);
    _swift_bridgeObjectRelease(uVar6);
    _objc_msgSend(self,"unlock");
  }
  return;
}

