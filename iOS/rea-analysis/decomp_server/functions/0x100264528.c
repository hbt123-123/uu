// rea decompile_all
// name: FUN_100264528
// address: 0x100264528
// body: available
// range: 0x100264528-0x1002646cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100264528(long param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  
  puVar3 = &DAT_100a812d8;
  FUN_100004bb4(&DAT_100a812d8,&DAT_1008153a0);
  puVar7 = &stack0xffffffffffffffa0 +
           -(*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a81018;
  FUN_100004bb4(&DAT_100a81018,&DAT_100815150);
  lVar6 = (long)puVar7 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a812f0;
  FUN_100004bb4(&DAT_100a812f0,&DAT_1008153b8);
  uVar8 = *(undefined8 *)(param_1 + *(int *)(puVar3 + 0x2c));
  FUN_10007f314(param_1,lVar6,&DAT_100a81018,&DAT_100815150);
  uVar1 = *(undefined8 *)(param_1 + *(int *)(puVar3 + 0x30));
  uVar2 = ((undefined8 *)(param_1 + *(int *)(puVar3 + 0x30)))[1];
  FUN_1002d9f30(puVar7,puVar3);
  lVar4 = 0;
  FUN_100277ad0();
  puVar5 = puVar7;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(puVar7,1,lVar4);
  if ((int)puVar5 == 1) {
    FUN_100040bb4(puVar7,&DAT_100a812d8,&DAT_1008153a0);
    lVar4 = 0;
  }
  else {
    FUN_1002652d8();
    _swift_allocError(lVar4,puVar5,0,0);
    FUN_10026531c(puVar7);
  }
  (*param_2)(uVar8,lVar6,uVar1,uVar2,lVar4);
  _swift_errorRelease(lVar4);
  FUN_100040bb4(lVar6,&DAT_100a81018,&DAT_100815150);
  return;
}

