// rea decompile_all
// name: FUN_100117458
// address: 0x100117458
// body: available
// range: 0x100117458-0x1001174f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100117458(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_100117274();
    _swift_allocObject();
    *(undefined1 *)(lVar2 + 0x10) = 0;
    __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC
              (lVar2 + _TtC14UURemoteServer16MouseButtonState::lastPressedTimeStamp,0);
    puVar1 = (undefined8 *)(lVar2 + _TtC14UURemoteServer16MouseButtonState::lastPressedLocation);
    puVar1[1] = 0xc059000000000000;
    *puVar1 = 0xc059000000000000;
    *(undefined8 *)(lVar2 + _TtC14UURemoteServer16MouseButtonState::clickCount) = 0;
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    *(long *)(unaff_x20 + 0x20) = lVar2;
    _swift_retain(lVar2);
    _swift_release(uVar4);
    lVar3 = 0;
  }
  _swift_retain(lVar3);
  return lVar2;
}

