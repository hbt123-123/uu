// rea decompile_all
// name: FUN_10005c820
// address: 0x10005c820
// body: available
// range: 0x10005c820-0x10005c91b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005c820(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar1 = 0;
  local_68 = param_1;
  FUN_100098548(0,param_8);
  lVar5 = *(long *)(lVar1 + -8);
  lVar3 = *(long *)(lVar5 + 0x40);
  puVar2 = &DAT_1000f7110;
  _swift_allocObject(&DAT_1000f7110,0x81,7);
  uVar7 = param_2[1];
  uVar6 = *param_2;
  uVar4 = param_2[2];
  *(undefined8 *)(puVar2 + 0x30) = param_2[3];
  *(undefined8 *)(puVar2 + 0x28) = uVar4;
  uVar4 = param_2[4];
  uVar9 = param_2[7];
  uVar8 = param_2[6];
  *(undefined8 *)(puVar2 + 0x40) = param_2[5];
  *(undefined8 *)(puVar2 + 0x38) = uVar4;
  *(undefined8 *)(puVar2 + 0x50) = uVar9;
  *(undefined8 *)(puVar2 + 0x48) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = param_8;
  uVar4 = param_2[8];
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  *(undefined8 *)(puVar2 + 0x18) = uVar6;
  *(undefined8 *)(puVar2 + 0x58) = uVar4;
  *(undefined8 *)(puVar2 + 0x60) = param_6;
  *(undefined8 *)(puVar2 + 0x68) = param_7;
  *(undefined8 *)(puVar2 + 0x70) = param_3;
  *(undefined8 *)(puVar2 + 0x78) = param_4;
  puVar2[0x80] = param_5;
  FUN_100098b0c(auStack_70 + -(lVar3 + 0xfU & 0xfffffffffffffff0),FUN_10005e3f8,puVar2,param_8);
  (**(code **)(lVar5 + 0x20))(local_68,auStack_70 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}

