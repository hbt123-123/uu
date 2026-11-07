// rea decompile_all
// name: FUN_1002647ec
// address: 0x1002647ec
// body: available
// range: 0x1002647ec-0x100264987 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002647ec(long param_1,code *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  
  puVar1 = &DAT_100a812d8;
  FUN_100004bb4(&DAT_100a812d8,&DAT_1008153a0);
  puVar5 = &stack0xffffffffffffffa0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100a81018;
  FUN_100004bb4(&DAT_100a81018,&DAT_100815150);
  lVar4 = (long)puVar5 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100a812e0;
  FUN_100004bb4(&DAT_100a812e0,&DAT_1008153b0);
  uVar6 = *(undefined8 *)(param_1 + *(int *)(puVar1 + 0x2c));
  FUN_10007f314(param_1,lVar4,&DAT_100a81018,&DAT_100815150);
  FUN_1002db180(puVar5,puVar1);
  lVar2 = 0;
  FUN_100277ad0();
  puVar3 = puVar5;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(puVar5,1,lVar2);
  if ((int)puVar3 == 1) {
    FUN_100040bb4(puVar5,&DAT_100a812d8,&DAT_1008153a0);
    lVar2 = 0;
  }
  else {
    FUN_1002652d8();
    _swift_allocError(lVar2,puVar3,0,0);
    FUN_10026531c(puVar5);
  }
  (*param_2)(uVar6,lVar4,0,0xf000000000000000,lVar2);
  _swift_errorRelease(lVar2);
  FUN_100040bb4(lVar4,&DAT_100a81018,&DAT_100815150);
  return;
}

