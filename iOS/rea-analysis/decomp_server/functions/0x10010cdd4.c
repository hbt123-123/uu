// rea decompile_all
// name: FUN_10010cdd4
// address: 0x10010cdd4
// body: available
// range: 0x10010cdd4-0x10010ced7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010cdd4(undefined4 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined4 local_78 [6];
  undefined *local_60;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x88,auStack_58,0x21,0);
  if (*(char *)(unaff_x20 + 0x8c) == '\x01') {
    *(undefined4 *)(unaff_x20 + 0x88) = param_1;
    *(undefined1 *)(unaff_x20 + 0x8c) = 0;
    pcVar1 = *(code **)(unaff_x20 + 0x90);
    puVar2 = &DAT_100a75980;
    FUN_100004bb4(&DAT_100a75980,&DAT_100809a40);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    local_60 = PTR___ss5Int32VN_100995c78;
    local_78[0] = param_1;
    FUN_10003e8bc(local_78,puVar2 + 0x30);
    *(undefined8 *)(puVar2 + 0x20) = 0x7365725f74736163;
    *(undefined8 *)(puVar2 + 0x28) = 0xeb00000000746c75;
    FUN_10003f094(local_78);
    (*pcVar1)(0xd00000000000001a,0x800000010088bb20,puVar2);
    _swift_bridgeObjectRelease(puVar2);
  }
  _swift_endAccess(auStack_58);
  return;
}

