// rea decompile_all
// name: FUN_1000f68b4
// address: 0x1000f68b4
// body: available
// range: 0x1000f68b4-0x1000f6bbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f68b4(long *param_1,long param_2)

{
  long ***ppplVar1;
  undefined *puVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  long **pplVar5;
  long ***ppplVar6;
  undefined1 auStack_b0 [16];
  long ***local_a0;
  long ***local_90 [3];
  undefined8 local_78;
  long lStack_70;
  long ***local_68;
  long **pplStack_60;
  undefined *local_50;
  long ***local_48;
  
  FUN_1003dab04();
  (**(code **)(*param_1 + 0x108))(local_90);
  _swift_release(param_1);
  pppplVar3 = (long ****)PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000cc648();
  puVar2 = PTR___sSSN_1009957f8;
  local_48 = (long ***)pppplVar3;
  if ((long ****)local_90[0] == (long ****)0x0) {
LAB_1000f694c:
    pppplVar4 = (long ****)0x0;
    param_2 = -0x2000000000000000;
  }
  else {
    pplVar5 = (long **)(*local_90[0])[0x10];
    pppplVar4 = (long ****)local_90[0];
    _swift_retain();
    (*(code *)pplVar5)();
    pppplVar3 = (long ****)local_90[0];
    _swift_release();
    if (param_2 == 0) goto LAB_1000f694c;
  }
  local_50 = puVar2;
  local_68 = (long ***)pppplVar4;
  pplStack_60 = (long **)param_2;
  FUN_1003a1744();
  ppplVar6 = *pppplVar3;
  ppplVar1 = pppplVar3[1];
  _swift_bridgeObjectRetain(ppplVar1);
  FUN_1000f7804(local_90,&local_68,ppplVar6,ppplVar1);
  _swift_bridgeObjectRelease(ppplVar1);
  pppplVar3 = local_90;
  FUN_1000c776c();
  if ((long ****)local_90[0] != (long ****)0x0) {
    pplVar5 = (long **)(*local_90[0])[0x19];
    pppplVar4 = (long ****)local_90[0];
    _swift_retain();
    (*(code *)pplVar5)();
    pppplVar3 = (long ****)local_90[0];
    _swift_release();
    if (ppplVar6 != (long ***)0x0) goto LAB_1000f69d4;
  }
  pppplVar4 = (long ****)0x0;
  ppplVar6 = (long ***)0xe000000000000000;
LAB_1000f69d4:
  local_50 = puVar2;
  local_68 = (long ***)pppplVar4;
  pplStack_60 = (long **)ppplVar6;
  FUN_1003a1770();
  ppplVar6 = *pppplVar3;
  ppplVar1 = pppplVar3[1];
  _swift_bridgeObjectRetain(ppplVar1);
  FUN_1000f7804(local_90,&local_68,ppplVar6,ppplVar1);
  _swift_bridgeObjectRelease(ppplVar1);
  pppplVar3 = local_90;
  FUN_1000c776c();
  puVar2 = PTR___sSiN_100995968;
  local_50 = PTR___sSiN_100995968;
  local_68 = (long ***)0x4;
  FUN_1003a17c4();
  ppplVar6 = *pppplVar3;
  ppplVar1 = pppplVar3[1];
  _swift_bridgeObjectRetain(ppplVar1);
  FUN_1000f7804(local_90,&local_68,ppplVar6,ppplVar1);
  _swift_bridgeObjectRelease(ppplVar1);
  pppplVar3 = local_90;
  FUN_1000c776c();
  local_50 = puVar2;
  local_68 = (long ***)0x1;
  FUN_1003a184c();
  ppplVar6 = *pppplVar3;
  ppplVar1 = pppplVar3[1];
  _swift_bridgeObjectRetain(ppplVar1);
  FUN_1000f7804(local_90,&local_68,ppplVar6,ppplVar1);
  _swift_bridgeObjectRelease(ppplVar1);
  FUN_1000c776c(local_90);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_a0 = (long ***)&local_48;
  FUN_1003fb48c(FUN_1000f7a28,auStack_b0,0xd000000000000097,0x80000001008896d0,0xd00000000000001c,
                0x8000000100889850,0x3c,0);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_1000b142c(DAT_100b360a8 + 200,local_90);
  FUN_10003f030(local_90,local_78);
  ppplVar6 = local_48;
  pppplVar3 = (long ****)local_48;
  FUN_100183774(local_48);
  (**(code **)(lStack_70 + 0x68))();
  _swift_bridgeObjectRelease(pppplVar3);
  _swift_release(local_90[0]);
  FUN_10003f094(local_90);
  _swift_bridgeObjectRelease(ppplVar6);
  return;
}

