// rea decompile_all
// name: FUN_10060e460
// address: 0x10060e460
// body: available
// range: 0x10060e460-0x10060e607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10060e460(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  long local_90 [3];
  undefined1 auStack_78 [24];
  
  lVar6 = *param_1;
  puVar1 = &DAT_1009decd0;
  _swift_allocObject(&DAT_1009decd0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    pcVar7 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_1009ded20;
    local_90[0] = param_2;
    _swift_allocObject(&DAT_1009ded20,0x30,7);
    *(undefined8 *)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    *(undefined **)(puVar2 + 0x20) = puVar1;
    *(long **)(puVar2 + 0x28) = param_1;
    puVar3 = &DAT_1009ded48;
    _swift_allocObject(&DAT_1009ded48,0x30,7);
    *(undefined8 *)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    *(undefined **)(puVar3 + 0x20) = puVar1;
    *(long **)(puVar3 + 0x28) = param_1;
    uVar4 = 0;
    __s7Combine6FutureCMa(0,*(undefined8 *)(lVar6 + 0x50),param_3,param_4);
    _swift_retain_n(puVar1,2);
    _swift_retain_n(param_1,2);
    puVar5 = PTR___s7Combine6FutureCyxq_GAA9PublisherAAMc_100995538;
    _swift_getWitnessTable(PTR___s7Combine6FutureCyxq_GAA9PublisherAAMc_100995538,uVar4);
    pcVar7 = FUN_10060eb78;
    __s7Combine9PublisherPAAE4sink17receiveCompletion0D5ValueAA14AnyCancellableCyAA11SubscribersO0E0Oy_7FailureQzGc_y6OutputQzctF
              (FUN_10060eb78,puVar2,FUN_10060ebb0,puVar3,uVar4,puVar5);
    _swift_release(param_2);
    _swift_release(puVar2);
    _swift_release(puVar3);
  }
  _swift_beginAccess(puVar1 + 0x10,local_90,1,0);
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  *(code **)(puVar1 + 0x10) = pcVar7;
  _swift_release(puVar1);
  _swift_release(uVar4);
  return;
}

