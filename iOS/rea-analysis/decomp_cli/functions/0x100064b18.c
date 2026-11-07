// rea decompile_all
// name: FUN_100064b18
// address: 0x100064b18
// body: available
// range: 0x100064b18-0x100064caf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100064b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [32];
  undefined8 local_90;
  undefined1 local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar2 = 0;
  local_e0 = param_4;
  uStack_d8 = param_6;
  local_d0 = param_2;
  __sSqMa(0,param_7);
  lVar5 = *(long *)(lVar2 + -8);
  lVar4 = (long)&local_e0 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(param_7 + -8);
  lVar7 = lVar4 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar5 + 0x10))(lVar4,param_3,lVar2);
  lVar3 = lVar4;
  (**(code **)(lVar6 + 0x30))(lVar4,1,param_7);
  if ((int)lVar3 == 1) {
    (**(code **)(lVar5 + 8))(lVar4,lVar2);
  }
  else {
    (**(code **)(lVar6 + 0x20))(lVar7,lVar4,param_7);
    local_68 = param_7;
    FUN_100060d88(auStack_80);
    (**(code **)(lVar6 + 0x10))();
    FUN_1000133cc(auStack_80,auStack_b0,&DAT_100104198,&DAT_1000d5180);
    uVar1 = uStack_d8;
    local_c8 = local_e0;
    local_b8 = uStack_d8;
    local_88 = 1;
    uStack_c0 = param_5;
    local_90 = param_1;
    _swift_bridgeObjectRetain(param_5);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(param_1);
    FUN_100099afc(&local_c8);
    FUN_100065194(&local_c8);
    (**(code **)(lVar6 + 8))(lVar7,param_7);
    FUN_1000651c8(auStack_80);
  }
  return;
}

