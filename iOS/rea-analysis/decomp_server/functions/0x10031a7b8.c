// rea decompile_all
// name: FUN_10031a7b8
// address: 0x10031a7b8
// body: available
// range: 0x10031a7b8-0x10031a8b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031a7b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  
  __s7Combine10SubscriberP7receiveyAA11SubscribersO6DemandV5InputQzFTj(param_1,param_4,param_5);
  puVar1 = PTR___s7Combine10SubscriberTL_100995510;
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_5,param_4,PTR___s7Combine10SubscriberTL_100995510,
             PTR___s7Failure7Combine10SubscriberPTl_100995540);
  uVar3 = param_5;
  _swift_getAssociatedConformanceWitness
            (param_5,param_4,lVar2,puVar1,PTR___s7Combine10SubscriberP7FailureAC_s5ErrorTn_100995508
            );
  lVar4 = 0;
  __s7Combine11SubscribersO10CompletionOMa(0,lVar2,uVar3);
  lVar6 = *(long *)(lVar4 + -8);
  puVar5 = &stack0xffffffffffffffb0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar5,1,1,lVar2);
  __s7Combine10SubscriberP7receive10completionyAA11SubscribersO10CompletionOy_7FailureQzG_tFTj
            (puVar5,param_4,param_5);
  (**(code **)(lVar6 + 8))(puVar5,lVar4);
  return;
}

