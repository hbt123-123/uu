// rea decompile_all
// name: FUN_10036ac84
// address: 0x10036ac84
// body: available
// range: 0x10036ac84-0x10036b067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10036ac84(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar2 = (int)plVar3;
    if (iVar2 < 5) {
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          lVar4 = 0;
          __s10Foundation10URLRequestVMa();
          (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
          puVar5 = &DAT_100a88a88;
          FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
          iVar2 = *(int *)(puVar5 + 0x30);
          uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
          _swift_errorRetain(uVar7);
          *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
          uVar7 = 0;
        }
        else {
          lVar4 = 0;
          __s10Foundation10URLRequestVMa();
          (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
          puVar5 = &DAT_100a88a88;
          FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
          iVar2 = *(int *)(puVar5 + 0x30);
          uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
          _swift_errorRetain(uVar7);
          *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
          uVar7 = 1;
        }
      }
      else if (iVar2 == 2) {
        lVar4 = 0;
        __s10Foundation10URLRequestVMa();
        (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
        puVar5 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        iVar2 = *(int *)(puVar5 + 0x30);
        uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
        _swift_errorRetain(uVar7);
        *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
        uVar7 = 2;
      }
      else if (iVar2 == 3) {
        lVar4 = 0;
        __s10Foundation10URLRequestVMa();
        (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
        puVar5 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        iVar2 = *(int *)(puVar5 + 0x30);
        uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
        _swift_errorRetain(uVar7);
        *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
        uVar7 = 3;
      }
      else {
        lVar4 = 0;
        __s10Foundation10URLRequestVMa();
        (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
        puVar5 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        iVar2 = *(int *)(puVar5 + 0x30);
        uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
        _swift_errorRetain(uVar7);
        *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
        uVar7 = 4;
      }
    }
    else if (iVar2 < 7) {
      if (iVar2 == 5) {
        lVar4 = 0;
        __s10Foundation10URLRequestVMa();
        (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
        puVar5 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        iVar2 = *(int *)(puVar5 + 0x30);
        uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
        _swift_errorRetain(uVar7);
        *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
        uVar7 = 5;
      }
      else {
        lVar4 = 0;
        __s10Foundation10URLRequestVMa();
        (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
        puVar5 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        iVar2 = *(int *)(puVar5 + 0x30);
        uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
        _swift_errorRetain(uVar7);
        *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
        uVar7 = 6;
      }
    }
    else if (iVar2 == 7) {
      lVar4 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
      puVar5 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      iVar2 = *(int *)(puVar5 + 0x30);
      uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
      _swift_errorRetain(uVar7);
      *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
      uVar7 = 7;
    }
    else if (iVar2 == 8) {
      lVar4 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
      puVar5 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      iVar2 = *(int *)(puVar5 + 0x30);
      uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
      _swift_errorRetain(uVar7);
      *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
      uVar7 = 8;
    }
    else {
      lVar4 = *param_2;
      _swift_errorRetain(lVar4);
      *param_1 = lVar4;
      uVar7 = 9;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar7);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar6 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

