// rea decompile_all
// name: FUN_10031f3b4
// address: 0x10031f3b4
// body: available
// range: 0x10031f3b4-0x10031f55b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031f3b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auStack_a0 [8];
  long local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  code *pcStack_68;
  
  lVar4 = 0;
  local_70 = param_6;
  pcStack_68 = param_5;
  __sScS12ContinuationV15BufferingPolicyOMa(0,param_7);
  lStack_78 = *(long *)(lVar4 + -8);
  local_80 = lVar4;
  (**(code **)(lStack_78 + 0x10))(param_1,param_2,lVar4);
  lVar5 = 0;
  FUN_10032b6a8(0,param_7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x1c));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  lVar4 = 0;
  local_90 = param_4;
  __sScSMa(0,param_7);
  local_98 = *(long *)(lVar4 + -8);
  puVar9 = auStack_a0 + -(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_88 = lVar4;
  __sScS12ContinuationVMa(0,param_7);
  lVar8 = *(long *)(lVar6 + -8);
  lVar7 = (long)puVar9 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10004090c(param_3,param_4);
  FUN_100328a18(puVar9,lVar7,param_7,param_2,param_7);
  lVar2 = local_88;
  lVar4 = local_98;
  (**(code **)(local_98 + 0x10))(param_1 + *(int *)(lVar5 + 0x20),puVar9,local_88);
  (**(code **)(lVar8 + 0x10))(param_1 + *(int *)(lVar5 + 0x24),lVar7,lVar6);
  uVar3 = local_70;
  (*pcStack_68)(lVar7);
  _swift_release(uVar3);
  FUN_10007ed2c(param_3,local_90);
  (**(code **)(lStack_78 + 8))(param_2,local_80);
  (**(code **)(lVar8 + 8))(lVar7,lVar6);
  (**(code **)(lVar4 + 8))(puVar9,lVar2);
  return;
}

