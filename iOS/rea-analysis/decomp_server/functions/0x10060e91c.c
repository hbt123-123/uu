// rea decompile_all
// name: FUN_10060e91c
// address: 0x10060e91c
// body: available
// range: 0x10060e91c-0x10060ea73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10060e91c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  long local_80 [3];
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_1009decd0;
  _swift_allocObject(&DAT_1009decd0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  _swift_beginAccess(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_1009decf8;
    local_80[0] = param_3;
    _swift_allocObject(&DAT_1009decf8,0x30,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    *(undefined8 *)(puVar2 + 0x20) = param_1;
    *(undefined8 *)(puVar2 + 0x28) = param_2;
    uVar3 = 0;
    __s7Combine6FutureCMa(0,param_4,PTR___ss5NeverON_100995d08,PTR___ss5NeverOs5ErrorsWP_100995d10);
    _swift_retain(puVar1);
    _swift_retain(param_2);
    puVar4 = PTR___s7Combine6FutureCyxq_GAA9PublisherAAMc_100995538;
    _swift_getWitnessTable(PTR___s7Combine6FutureCyxq_GAA9PublisherAAMc_100995538,uVar3);
    pcVar5 = FUN_10060eb68;
    __s7Combine9PublisherPAAs5NeverO7FailureRtzrlE4sink12receiveValueAA14AnyCancellableCy6OutputQzc_tF
              (FUN_10060eb68,puVar2,uVar3,puVar4);
    _swift_release(param_3);
    _swift_release(puVar2);
  }
  _swift_beginAccess(puVar1 + 0x10,local_80,1,0);
  uVar3 = *(undefined8 *)(puVar1 + 0x10);
  *(code **)(puVar1 + 0x10) = pcVar5;
  _swift_release(puVar1);
  _swift_release(uVar3);
  return;
}

