// rea decompile_all
// name: FUN_100085d78
// address: 0x100085d78
// body: available
// range: 0x100085d78-0x100085edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100085d78(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined8 local_58;
  undefined8 local_48;
  
  lVar4 = (long)&local_a0 - (*(long *)(param_3[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(param_3[-1] + 0x10))(lVar4,param_2,param_3);
  puVar1 = &DAT_1001049e0;
  FUN_10000eb08(&DAT_1001049e0,&DAT_1000d56c8);
  puVar2 = &local_a0;
  _swift_dynamicCast(puVar2,lVar4,param_3,puVar1,6);
  if (((ulong)puVar2 & 1) == 0) {
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    FUN_10001fc18(&local_a0,&DAT_1001049e8,&DAT_1000d56d0);
    (**(code **)(param_4 + 0x10))();
  }
  else {
    FUN_10008672c(&local_a0,auStack_70);
    FUN_10000eba0(auStack_70,local_58);
    uVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,local_48,local_58,PTR___sSYTL_1000f0360,PTR___s8RawValueSYTl_1000f02c0);
    puVar2 = &local_a0;
    uStack_88 = uVar3;
    FUN_100060d88(puVar2);
    __sSY8rawValue03RawB0QzvgTj(puVar2,local_58,local_48);
    param_3 = &local_a0;
    param_4 = PTR___sypN_1000f0728 + 8;
    __sSS10describingSSx_tclufC();
    FUN_100001428(auStack_70);
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  return;
}

