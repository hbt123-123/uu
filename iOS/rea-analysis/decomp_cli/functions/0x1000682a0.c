// rea decompile_all
// name: FUN_1000682a0
// address: 0x1000682a0
// body: available
// range: 0x1000682a0-0x1000683a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000682a0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  lVar1 = 0;
  local_78 = param_9;
  local_6c = param_7;
  local_68 = param_1;
  FUN_100098548(0,param_10);
  lVar4 = *(long *)(lVar1 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  puVar2 = &DAT_1000f82b0;
  _swift_allocObject(&DAT_1000f82b0,0x91,7);
  *(undefined8 *)(puVar2 + 0x10) = param_10;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  uVar5 = param_4[4];
  uVar7 = param_4[7];
  uVar6 = param_4[6];
  *(undefined8 *)(puVar2 + 0x48) = param_4[5];
  *(undefined8 *)(puVar2 + 0x40) = uVar5;
  *(undefined8 *)(puVar2 + 0x58) = uVar7;
  *(undefined8 *)(puVar2 + 0x50) = uVar6;
  *(undefined8 *)(puVar2 + 0x60) = param_4[8];
  uVar7 = *param_4;
  uVar6 = param_4[3];
  uVar5 = param_4[2];
  *(undefined8 *)(puVar2 + 0x28) = param_4[1];
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  *(undefined8 *)(puVar2 + 0x38) = uVar6;
  *(undefined8 *)(puVar2 + 0x30) = uVar5;
  puVar2[0x68] = param_3;
  *(undefined8 *)(puVar2 + 0x70) = param_8;
  *(undefined8 *)(puVar2 + 0x78) = local_78;
  *(undefined8 *)(puVar2 + 0x80) = param_5;
  *(undefined8 *)(puVar2 + 0x88) = param_6;
  puVar2[0x90] = (char)local_6c;
  FUN_100098b0c(auStack_80 + -(lVar3 + 0xfU & 0xfffffffffffffff0),FUN_10006a2d8,puVar2,param_10);
  (**(code **)(lVar4 + 0x20))(local_68,auStack_80 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}

