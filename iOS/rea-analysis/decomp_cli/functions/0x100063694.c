// rea decompile_all
// name: FUN_100063694
// address: 0x100063694
// body: available
// range: 0x100063694-0x10006377f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100063694(undefined8 param_1,undefined1 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = 0xff;
  __sSqMa(0xff,param_4);
  lVar2 = 0;
  FUN_100098548(0,uVar1);
  lVar5 = *(long *)(lVar2 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  puVar3 = &DAT_1000f7ba8;
  _swift_allocObject(&DAT_1000f7ba8,0x69,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  uVar6 = param_3[4];
  uVar8 = param_3[7];
  uVar7 = param_3[6];
  *(undefined8 *)(puVar3 + 0x48) = param_3[5];
  *(undefined8 *)(puVar3 + 0x40) = uVar6;
  *(undefined8 *)(puVar3 + 0x58) = uVar8;
  *(undefined8 *)(puVar3 + 0x50) = uVar7;
  *(undefined8 *)(puVar3 + 0x60) = param_3[8];
  uVar8 = *param_3;
  uVar7 = param_3[3];
  uVar6 = param_3[2];
  *(undefined8 *)(puVar3 + 0x28) = param_3[1];
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(undefined8 *)(puVar3 + 0x38) = uVar7;
  *(undefined8 *)(puVar3 + 0x30) = uVar6;
  puVar3[0x68] = param_2;
  FUN_100098b0c(&stack0xffffffffffffffa0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),FUN_100063a70,puVar3
                ,uVar1);
  (**(code **)(lVar5 + 0x20))
            (param_1,&stack0xffffffffffffffa0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),lVar2);
  return;
}

