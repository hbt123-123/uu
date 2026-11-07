// rea decompile_all
// name: FUN_100368a84
// address: 0x100368a84
// body: available
// range: 0x100368a84-0x100368d27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100368a84(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  
  lVar2 = 0;
  FUN_100365824();
  puVar9 = &stack0xffffffffffffffa0 +
           -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_10036584c();
  lVar10 = (long)puVar9 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100365874();
  lVar12 = lVar10 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_100365888();
  puVar11 = (undefined8 *)
            (lVar12 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_100082394();
  puVar6 = puVar11;
  _swift_getEnumCaseMultiPayload(puVar11,lVar5);
  iVar1 = (int)puVar6;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      FUN_1000823d8(puVar11,lVar12,FUN_100365874);
      lVar3 = lVar12;
      _swift_getEnumCaseMultiPayload(lVar12,lVar4);
      lVar2 = 400;
      if ((int)lVar3 == 9) {
        lVar2 = -1;
      }
      FUN_1000d27dc(lVar12,FUN_100365874);
    }
    else if (iVar1 == 1) {
      FUN_1000d27dc(puVar11,FUN_100365860);
      lVar2 = 0x191;
    }
    else {
      FUN_1000823d8(puVar11,lVar10,FUN_10036584c);
      lVar2 = lVar10;
      _swift_getEnumCaseMultiPayload(lVar10,lVar3);
      if ((int)lVar2 == 0xb) {
        puVar7 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        _swift_errorRelease(*(undefined8 *)(lVar10 + *(int *)(puVar7 + 0x30)));
        lVar2 = 0;
        __s10Foundation10URLRequestVMa();
        (**(code **)(*(long *)(lVar2 + -8) + 8))(lVar10,lVar2);
        lVar2 = 0x195;
      }
      else {
        FUN_1000d27dc(lVar10,FUN_10036584c);
        lVar2 = 0x193;
      }
    }
  }
  else if (iVar1 < 5) {
    if (iVar1 == 3) {
      FUN_1000d27dc(puVar11,FUN_100365838);
      lVar2 = 0x194;
    }
    else {
      FUN_1000823d8(puVar11,puVar9,FUN_100365824);
      puVar8 = puVar9;
      _swift_getEnumCaseMultiPayload(puVar9,lVar2);
      puVar7 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      _swift_errorRelease(*(undefined8 *)(puVar9 + *(int *)(puVar7 + 0x30)));
      lVar2 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar2 + -8) + 8))(puVar9,lVar2);
      lVar2 = ((ulong)puVar8 & 0xffffffff) + 500;
    }
  }
  else if (iVar1 == 5) {
    lVar2 = puVar11[1];
    _swift_errorRelease(*puVar11);
  }
  else {
    lVar2 = -1;
  }
  return lVar2;
}

