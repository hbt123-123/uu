// rea decompile_all
// name: FUN_1000855d8
// address: 0x1000855d8
// body: available
// range: 0x1000855d8-0x100085793 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000855d8(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [32];
  undefined *local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = 0xff;
  local_d8 = param_5;
  local_d0 = param_2;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_8,0x1000e2040,&TargetProtocolRequirement_1000e2050);
  lVar2 = 0;
  __sSqMa(0,lVar1);
  lVar5 = *(long *)(lVar2 + -8);
  puVar6 = auStack_e0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 1) {
    param_1 = &DAT_100104690;
    FUN_10000eb08(&DAT_100104690,&DAT_1000d56e0);
    _swift_initStaticObject();
    FUN_100097700();
  }
  else {
    _swift_bridgeObjectRetain(param_1);
  }
  (**(code **)(lVar5 + 0x10))(puVar6,param_4,lVar2);
  lVar4 = *(long *)(lVar1 + -8);
  puVar3 = puVar6;
  (**(code **)(lVar4 + 0x30))(puVar6,1,lVar1);
  if ((int)puVar3 == 1) {
    (**(code **)(lVar5 + 8))(puVar6,lVar2);
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
  }
  else {
    local_68 = lVar1;
    FUN_100060d88(&local_80);
    (**(code **)(lVar4 + 0x20))();
  }
  FUN_1000866dc(&local_80,auStack_b0);
  local_c8 = local_d8;
  local_88 = 1;
  uStack_c0 = param_6;
  local_b8 = param_7;
  local_90 = param_1;
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_7);
  FUN_100099afc(&local_c8);
  FUN_100065194(&local_c8);
  FUN_10001fc18(&local_80,&DAT_100104198,&DAT_1000d5180);
  return;
}

