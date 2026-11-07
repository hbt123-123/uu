// rea decompile_all
// name: FUN_1000401a4
// address: 0x1000401a4
// body: available
// range: 0x1000401a4-0x1000402ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000401a4(char *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 *puVar5;
  long unaff_x21;
  
  FUN_100023b14();
  if ((unaff_x21 == 0) && (*param_1 != '\x01')) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    puVar5 = *(undefined4 **)(param_1 + 0x68);
    lVar4 = *(long *)(param_1 + 0x58);
    if (*(long *)(param_1 + 0x58) == 0) {
      uVar1 = 0x69;
      uVar2 = 0xd000000000000014;
      puVar5 = (undefined4 *)0x80000001000c4650;
      lVar4 = -0x7ffffffefff3b9d0;
    }
    FUN_10002c918();
    FUN_100022760(uVar1,uVar2,lVar4,param_4 & 1);
    _swift_bridgeObjectRelease(lVar4);
    _swift_bridgeObjectRelease();
    FUN_1000607a4();
    uVar3 = *puVar5;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar5,0,0);
    *puVar5 = uVar3;
    _swift_willThrow();
    FUN_10001fc18(param_1,&DAT_100102f40,&DAT_1000cfa40);
  }
  return;
}

