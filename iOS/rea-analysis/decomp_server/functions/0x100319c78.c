// rea decompile_all
// name: FUN_100319c78
// address: 0x100319c78
// body: available
// range: 0x100319c78-0x100319e2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100319c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar2 = 0xff;
  FUN_100277ad0(0xff);
  puVar3 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar4 = 0;
  FUN_10028fd24(0,param_3,uVar2,puVar3);
  lVar8 = *(long *)(lVar4 + -8);
  puVar6 = &stack0xffffffffffffffa0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s7Combine10SubscriberP7receiveyAA11SubscribersO6DemandV5InputQzFTj(param_1,param_4,param_5);
  (**(code **)(lVar8 + 0x10))(puVar6,param_1,lVar4);
  puVar5 = puVar6;
  _swift_getEnumCaseMultiPayload(puVar6,lVar4);
  (**(code **)(lVar8 + 8))(puVar6,lVar4);
  puVar1 = PTR___s7Combine10SubscriberTL_100995510;
  if ((int)puVar5 == 1) {
    lVar4 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,param_5,param_4,PTR___s7Combine10SubscriberTL_100995510,
               PTR___s7Failure7Combine10SubscriberPTl_100995540);
    uVar2 = param_5;
    _swift_getAssociatedConformanceWitness
              (param_5,param_4,lVar4,puVar1,
               PTR___s7Combine10SubscriberP7FailureAC_s5ErrorTn_100995508);
    lVar8 = 0;
    __s7Combine11SubscribersO10CompletionOMa(0,lVar4,uVar2);
    lVar9 = *(long *)(lVar8 + -8);
    lVar7 = (long)puVar6 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar7,1,1,lVar4);
    __s7Combine10SubscriberP7receive10completionyAA11SubscribersO10CompletionOy_7FailureQzG_tFTj
              (lVar7,param_4,param_5);
    (**(code **)(lVar9 + 8))(lVar7,lVar8);
  }
  return;
}

