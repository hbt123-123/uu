// rea decompile_all
// name: FUN_10025b690
// address: 0x10025b690
// body: available
// range: 0x10025b690-0x10025b99b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10025b690(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  undefined8 local_68 [3];
  long *local_50;
  undefined **ppuStack_48;
  
  if (DAT_100a7fea0 != -1) {
    _swift_once(&DAT_100a7fea0,FUN_10025674c);
  }
  plVar9 = *(long **)(DAT_100b36400 + 0x10);
  pcVar8 = *(code **)(*plVar9 + 0x140);
  plVar7 = plVar9;
  _swift_retain();
  (*pcVar8)();
  _swift_release(plVar9);
  puVar5 = &DAT_100a80ce0;
  FUN_100004bb4(&DAT_100a80ce0,&DAT_100814f70);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  plVar10 = *(long **)(DAT_100b36400 + 0x10);
  pcVar8 = *(code **)(*plVar10 + 0x140);
  plVar9 = plVar10;
  _swift_retain();
  (*pcVar8)();
  _swift_release(plVar10);
  puVar6 = &DAT_100a80ce8;
  FUN_100004bb4(&DAT_100a80ce8,&DAT_100814f78);
  *(undefined **)(puVar5 + 0x38) = puVar6;
  *(long **)(puVar5 + 0x20) = plVar9;
  __ss5print_9separator10terminatoryypd_S2StF(puVar5,0x20,0xe100000000000000,10,0xe100000000000000);
  _swift_bridgeObjectRelease(puVar5);
  if (DAT_100a7feb0 != -1) {
    _swift_once(&DAT_100a7feb0,FUN_10025b610);
  }
  uVar3 = DAT_100b36410;
  _swift_retain(DAT_100b36410);
  plVar9 = plVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)plVar9 & 1) == 0) {
    plVar9 = (long *)0x0;
    FUN_10025d454(0,plVar7[2] + 1,1,plVar7);
    plVar7 = plVar9;
  }
  uVar1 = plVar7[2];
  if ((ulong)plVar7[3] >> 1 <= uVar1) {
    plVar9 = (long *)(ulong)(1 < (ulong)plVar7[3]);
    FUN_10025d454(plVar9,uVar1 + 1,1,plVar7);
    plVar7 = plVar9;
  }
  FUN_10025d010();
  ppuStack_48 = &PTR_PTR_1009a8750;
  local_68[0] = uVar3;
  plVar7[2] = uVar1 + 1;
  local_50 = plVar9;
  FUN_1000a0074(local_68,plVar7 + uVar1 * 5 + 4);
  plVar10 = *(long **)(DAT_100b36400 + 0x10);
  pcVar8 = *(code **)(*plVar10 + 0x158);
  plVar9 = plVar10;
  _swift_retain();
  uVar4 = (uint)plVar9;
  (*pcVar8)();
  _swift_release(plVar10);
  plVar9 = plVar7;
  if ((uVar4 & 0xff) < 2) {
    if (DAT_100a7fea8 != -1) {
      _swift_once(&DAT_100a7fea8,FUN_10025b59c);
    }
    uVar3 = DAT_100b36408;
    uVar1 = plVar7[2];
    uVar2 = plVar7[3];
    _swift_retain(DAT_100b36408);
    if (uVar2 >> 1 <= uVar1) {
      plVar9 = (long *)(ulong)(1 < uVar2);
      FUN_10025d454(plVar9,uVar1 + 1,1,plVar7);
    }
    plVar7 = (long *)0x0;
    FUN_100271c68();
    ppuStack_48 = &PTR_PTR_1009a9858;
    local_68[0] = uVar3;
    plVar9[2] = uVar1 + 1;
    local_50 = plVar7;
    FUN_1000a0074(local_68,plVar9 + uVar1 * 5 + 4);
  }
  puVar5 = &DAT_100a80cf0;
  FUN_100004bb4(&DAT_100a80cf0,&DAT_100814f80);
  puVar6 = puVar5;
  FUN_100266974();
  _swift_allocObject(puVar5,0x70,7);
  FUN_10026bd48(FUN_10025ff98,0,FUN_10025d038,0,FUN_1000103d0,0,0,puVar6,plVar9,0);
  return;
}

