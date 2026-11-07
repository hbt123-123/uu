// rea decompile_all
// name: FUN_10026e8c4
// address: 0x10026e8c4
// body: available
// range: 0x10026e8c4-0x10026ebeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10026e8c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *local_150;
  undefined8 local_148;
  undefined1 auStack_140 [40];
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar7 = *(long *)(lVar1 + -8);
  lVar8 = (long)&local_150 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000b142c(param_3,&local_c0);
  puVar2 = &DAT_100a81450;
  FUN_100004bb4(&DAT_100a81450,&DAT_1008157f0);
  puVar3 = &DAT_100a81458;
  FUN_100004bb4(&DAT_100a81458,&DAT_100815630);
  puVar4 = &local_f0;
  _swift_dynamicCast(puVar4,&local_c0,puVar2,puVar3,6);
  if (((ulong)puVar4 & 1) == 0) {
    local_d0 = 0;
    lStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    FUN_100040bb4(&local_f0,&DAT_100a81460,&DAT_100815800);
  }
  else {
    local_150 = param_4;
    local_148 = param_1;
    FUN_1000a0074(&local_f0,auStack_90);
    FUN_10003f030(auStack_90,local_78);
    uVar5 = local_78;
    lVar9 = lStack_70;
    (**(code **)(lStack_70 + 8))();
    if (lVar9 != 2) {
      (**(code **)(lVar7 + 0x10))(lVar8,param_2,lVar1);
      FUN_1000b142c(param_3,auStack_118);
      puVar4 = &local_c0;
      _swift_dynamicCast(puVar4,auStack_118,puVar2,&DAT_1009a9538,6);
      if ((int)puVar4 == 0) {
        local_a0 = 0;
        uStack_b8 = 0;
        local_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        FUN_100040bb4(&local_c0,&DAT_100a815b8,&DAT_100815808);
        FUN_1000b142c(param_3,&local_c0);
      }
      else {
        FUN_10026c920(&local_c0,auStack_140);
        FUN_1000a0074(auStack_140,&local_f0);
        FUN_10026ebfc(&local_c0);
        FUN_1000a0074(&local_f0,&local_c0);
      }
      if (lVar9 == 0) {
        FUN_10026ebec(uVar5,0);
        lVar9 = -0x1b00000000000000;
        uVar5 = 0x6369736142;
      }
      else if (lVar9 == 1) {
        FUN_10026ebec(uVar5,1);
        lVar9 = -0x1a00000000000000;
        uVar5 = 0x726572616542;
      }
      local_f0 = uVar5;
      lStack_e8 = lVar9;
      _swift_bridgeObjectRetain(lVar9);
      uVar6 = 0xe100000000000000;
      __sSS6appendyySSF(0x20,0xe100000000000000);
      _swift_bridgeObjectRelease(lVar9);
      lVar9 = lStack_e8;
      uVar5 = local_f0;
      puVar4 = &local_c0;
      (*local_150)(puVar4);
      local_f0 = uVar5;
      lStack_e8 = lVar9;
      _swift_bridgeObjectRetain(lVar9);
      __sSS6appendyySSF(puVar4,uVar6);
      _swift_bridgeObjectRelease(lVar9);
      _swift_bridgeObjectRelease(uVar6);
      lVar9 = lStack_e8;
      __s10Foundation10URLRequestV8addValue_18forHTTPHeaderFieldySS_SStF
                (local_f0,lStack_e8,0x7a69726f68747541,0xed00006e6f697461);
      _swift_bridgeObjectRelease(lVar9);
      FUN_10003f094(&local_c0);
      (**(code **)(lVar7 + 0x20))(local_148,lVar8,lVar1);
      FUN_10003f094(auStack_90);
      return;
    }
    FUN_10003f094(auStack_90);
    param_1 = local_148;
  }
  (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar1);
  return;
}

