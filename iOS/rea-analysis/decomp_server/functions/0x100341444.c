// rea decompile_all
// name: FUN_100341444
// address: 0x100341444
// body: available
// range: 0x100341444-0x10034161b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100341444(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  long local_68;
  
  puVar1 = &DAT_100a84680;
  FUN_100004bb4(&DAT_100a84680,&DAT_100818f90);
  puVar6 = auStack_90 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar5 + 0x10) == 0) {
    lVar5 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(puVar6,param_1,lVar5);
    _swift_storeEnumTagMultiPayload(puVar6,puVar1,0);
    (*param_3)(puVar6);
    FUN_100315050(puVar6);
  }
  else {
    FUN_1000b142c(lVar5 + 0x20,auStack_90);
    lVar3 = *(long *)(lVar5 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10034161c);
      (*pcVar4)();
    }
    lVar2 = lVar5;
    _swift_bridgeObjectRetain();
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar2 == 0) || (*(ulong *)(lVar5 + 0x18) >> 1 < lVar3 - 1U)) {
      local_68 = lVar5;
      FUN_100296580();
      lVar5 = lVar2;
    }
    local_68 = lVar5;
    FUN_100342528(0,1,0,&DAT_100a83320,&DAT_100817828);
    FUN_10003f030(auStack_90,local_78);
    puVar1 = &DAT_1009b3560;
    _swift_allocObject(&DAT_1009b3560,0x38,7);
    *(long *)(puVar1 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar1 + 0x18) = param_2;
    *(long *)(puVar1 + 0x20) = lVar5;
    *(code **)(puVar1 + 0x28) = param_3;
    *(undefined8 *)(puVar1 + 0x30) = param_4;
    pcVar4 = *(code **)(lStack_70 + 8);
    _swift_retain();
    _swift_retain(param_2);
    _swift_retain(param_4);
    (*pcVar4)(param_1,param_2,thunk_FUN_100342ee4,puVar1,local_78,lStack_70);
    _swift_release(puVar1);
    FUN_10003f094(auStack_90);
  }
  return;
}

