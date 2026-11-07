// rea decompile_all
// name: FUN_1000705a8
// address: 0x1000705a8
// body: available
// range: 0x1000705a8-0x1000706b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_1000705a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar1 = PTR___ss12CaseIterableTL_1000f04a8;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_1,PTR___ss12CaseIterableTL_1000f04a8,
             PTR___s8AllCasess12CaseIterablePTl_1000f02b0);
  lVar5 = *(long *)(lVar2 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  __ss12CaseIterableP8allCases03AllD0QzvgZTj
            (auStack_80 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_1,param_3);
  local_70 = param_1;
  uStack_68 = param_2;
  local_60 = param_3;
  _swift_getAssociatedConformanceWitness
            (param_3,param_1,lVar2,puVar1,PTR___ss12CaseIterableP8AllCasesAB_SlTn_1000f04a0);
  pcVar3 = FUN_10007342c;
  FUN_100070270(FUN_10007342c,auStack_80,lVar2,PTR___sSSN_1000f02f8,PTR___ss5NeverON_1000f0680,
                param_3,PTR___ss5NeverOs5ErrorsWP_1000f0688);
  (**(code **)(lVar5 + 8))(auStack_80 + -(lVar4 + 0xfU & 0xfffffffffffffff0),lVar2);
  return pcVar3;
}

