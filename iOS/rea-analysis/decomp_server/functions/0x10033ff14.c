// rea decompile_all
// name: FUN_10033ff14
// address: 0x10033ff14
// body: available
// range: 0x10033ff14-0x10034004f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033ff14(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  
  puVar1 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  puVar5 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_6 == (code *)0x0) {
    lVar2 = 0;
    __s10Foundation10URLRequestVMa();
    lVar6 = *(long *)(lVar2 + -8);
    (**(code **)(lVar6 + 0x10))(puVar5,param_2,lVar2);
    pcVar4 = *(code **)(lVar6 + 0x38);
    uVar3 = 0;
  }
  else {
    if (param_6 != (code *)0x1) {
      _swift_retain(param_7);
      (*param_6)(puVar5,param_1,param_2,param_3);
      (*param_4)(puVar5);
      FUN_1003178e0(param_6,param_7);
      goto LAB_10034002c;
    }
    lVar2 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar3 = 1;
  }
  (*pcVar4)(puVar5,uVar3,1,lVar2);
  (*param_4)(puVar5);
LAB_10034002c:
  FUN_100340050(puVar5);
  return;
}

