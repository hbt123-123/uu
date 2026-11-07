// rea decompile_all
// name: FUN_1001cf44c
// address: 0x1001cf44c
// body: available
// range: 0x1001cf44c-0x1001cf5af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cf44c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  puVar1 = (undefined *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (puVar1 != (undefined *)0x0) {
    _swift_beginAccess(param_2 + 0x10,auStack_70,0,0);
    puVar2 = (undefined *)(param_2 + 0x10);
    _swift_weakLoadStrong();
    if (puVar2 != (undefined *)0x0) {
      if ((puVar2[0x31] & 1) == 0) {
        FUN_1001cf5b0();
        puVar3 = &DAT_1009a33f8;
        _swift_allocObject(&DAT_1009a33f8,0x18,7);
        _swift_weakInit(puVar3 + 0x10,puVar1);
        puVar4 = &DAT_1009a3498;
        _swift_allocObject(&DAT_1009a3498,0x18,7);
        _swift_weakInit(puVar4 + 0x10,puVar2);
        puVar5 = &DAT_1009a3588;
        _swift_allocObject(&DAT_1009a3588,0x20,7);
        *(undefined **)(puVar5 + 0x10) = puVar3;
        *(undefined **)(puVar5 + 0x18) = puVar4;
        _swift_retain(puVar3);
        _swift_retain(puVar4);
        __s7Network12NWConnectionC7receive23minimumIncompleteLength07maximumF010completionySi_Siy10Foundation4DataVSg_AC14ContentContextCSgSbAA7NWErrorOSgtctF
                  (1,0x10000,FUN_1001d31e8,puVar5);
        _swift_release(puVar1);
        _swift_release(puVar2);
        _swift_release(puVar3);
        _swift_release(puVar4);
        puVar1 = puVar5;
      }
      else {
        _swift_release(puVar1);
        puVar1 = puVar2;
      }
    }
    _swift_release(puVar1);
  }
  return;
}

