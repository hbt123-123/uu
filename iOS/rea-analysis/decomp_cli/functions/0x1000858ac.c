// rea decompile_all
// name: FUN_1000858ac
// address: 0x1000858ac
// body: available
// range: 0x1000858ac-0x100085adb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000858ac(undefined8 param_1,undefined8 *param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 local_68;
  
  lVar1 = 0;
  __sSqMa();
  lVar11 = *(long *)(lVar1 + -8);
  lVar9 = (long)&local_c0 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = param_2[-1];
  uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = lVar9 - uVar6;
  lVar8 = lVar7 - uVar6;
  (**(code **)(lVar11 + 0x10))(lVar9,param_1,lVar1);
  lVar2 = lVar9;
  (**(code **)(lVar10 + 0x30))(lVar9,1,param_2);
  if ((int)lVar2 == 1) {
    (**(code **)(lVar11 + 8))(lVar9,lVar1);
    puVar3 = (undefined8 *)0x0;
    param_3 = (undefined *)0x0;
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar8,lVar9,param_2);
    (**(code **)(lVar10 + 0x10))(lVar7,lVar8,param_2);
    puVar4 = &DAT_1001049e0;
    FUN_10000eb08(&DAT_1001049e0,&DAT_1000d56c8);
    puVar3 = &local_c0;
    _swift_dynamicCast(puVar3,lVar7,param_2,puVar4,6);
    if ((int)puVar3 == 0) {
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      FUN_10001fc18(&local_c0,&DAT_1001049e8,&DAT_1000d56d0);
      puVar3 = param_2;
      (**(code **)(param_3 + 0x10))(param_2,param_3);
      (**(code **)(lVar10 + 8))(lVar8,param_2);
    }
    else {
      FUN_10008672c(&local_c0,auStack_90);
      FUN_10000eba0(auStack_90,local_78);
      uVar5 = 0;
      _swift_getAssociatedTypeWitness
                (0,local_68,local_78,PTR___sSYTL_1000f0360,PTR___s8RawValueSYTl_1000f02c0);
      puVar3 = &local_c0;
      uStack_a8 = uVar5;
      FUN_100060d88(puVar3);
      __sSY8rawValue03RawB0QzvgTj(puVar3,local_78,local_68);
      puVar3 = &local_c0;
      param_3 = PTR___sypN_1000f0728 + 8;
      __sSS10describingSSx_tclufC(puVar3,param_3);
      (**(code **)(lVar10 + 8))(lVar8,param_2);
      FUN_100001428(auStack_90);
    }
  }
  auVar12._8_8_ = param_3;
  auVar12._0_8_ = puVar3;
  return auVar12;
}

