// rea decompile_all
// name: FUN_100070890
// address: 0x100070890
// body: available
// range: 0x100070890-0x1000709c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100070890(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *local_70;
  undefined8 local_68;
  
  puVar1 = PTR___ss12CaseIterableTL_1000f04a8;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_1,PTR___ss12CaseIterableTL_1000f04a8,
             PTR___s8AllCasess12CaseIterablePTl_1000f02b0);
  lVar6 = *(long *)(lVar2 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  __ss12CaseIterableP8allCases03AllD0QzvgZTj
            (auStack_b0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_1,param_3);
  puVar3 = PTR___swiftEmptyArrayStorage_1000f0740;
  FUN_10007331c();
  puVar4 = &DAT_1001044d0;
  local_a0 = param_1;
  uStack_98 = param_2;
  local_90 = param_3;
  uStack_88 = param_4;
  local_80 = param_5;
  local_70 = puVar3;
  FUN_10000eb08(&DAT_1001044d0,&DAT_1000d4a20);
  _swift_getAssociatedConformanceWitness
            (param_3,param_1,lVar2,puVar1,PTR___ss12CaseIterableP8AllCasesAB_SlTn_1000f04a0);
  __sSTsE6reduce4into_qd__qd__n_yqd__z_7ElementQztKXEtKlF
            (&local_68,&local_70,FUN_10007352c,auStack_b0,lVar2,puVar4,*(undefined8 *)(param_3 + 8))
  ;
  (**(code **)(lVar6 + 8))(auStack_b0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),lVar2);
  return local_68;
}

