// rea decompile_all
// name: FUN_100610d94
// address: 0x100610d94
// body: available
// range: 0x100610d94-0x100610e8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100610d94(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long *unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar3 = 0;
  FUN_100608530(0,*(undefined8 *)(*unaff_x20 + 0xb0));
  lVar6 = *(long *)(lVar3 + -8);
  puVar5 = auStack_60 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100607d6c(puVar5);
  puVar4 = puVar5;
  _swift_getEnumCaseMultiPayload(puVar5,lVar3);
  (**(code **)(lVar6 + 8))(puVar5,lVar3);
  if ((int)puVar4 != 1) {
    if (DAT_100aafef8 != -1) {
      _swift_once(&DAT_100aafef8,FUN_10060f124);
    }
    _swift_beginAccess(&DAT_100b3a770,auStack_58,0,0);
    uVar2 = DAT_100b3a790;
    pcVar1 = DAT_100b3a788;
    _swift_retain(DAT_100b3a790);
    (*pcVar1)(2);
    _swift_release(uVar2);
  }
  FUN_1006084b0();
  return;
}

