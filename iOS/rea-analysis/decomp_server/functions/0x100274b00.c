// rea decompile_all
// name: FUN_100274b00
// address: 0x100274b00
// body: available
// range: 0x100274b00-0x100274e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100274e1c to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100274b00(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  
  lVar7 = *(long *)(param_3 + -8);
  uVar2 = *(uint *)(lVar7 + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    plVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar3 = (int)plVar4;
    if (iVar3 < 5) {
      if (iVar3 < 2) {
        if (iVar3 == 0) {
          lVar7 = *param_2;
          lVar1 = param_2[1];
          FUN_100008184(lVar7,lVar1);
          *param_1 = lVar7;
          param_1[1] = lVar1;
          uVar5 = 0;
        }
        else {
          if (iVar3 != 1) {
LAB_100274e00:
            plVar4 = _memcpy(param_1,param_2,*(size_t *)(lVar7 + 0x40));
            return plVar4;
          }
          lVar7 = param_2[3];
          param_1[4] = param_2[4];
          param_1[3] = lVar7;
          (*(code *)**(undefined8 **)(lVar7 + -8))(param_1,param_2);
          uVar5 = 1;
        }
      }
      else if (iVar3 == 2) {
        lVar7 = param_2[3];
        param_1[4] = param_2[4];
        param_1[3] = lVar7;
        (*(code *)**(undefined8 **)(lVar7 + -8))(param_1,param_2);
        param_1[5] = param_2[5];
        _swift_retain();
        uVar5 = 2;
      }
      else if (iVar3 == 3) {
        *param_1 = *param_2;
        lVar7 = param_2[4];
        param_1[5] = param_2[5];
        param_1[4] = lVar7;
        pcVar8 = (code *)**(undefined8 **)(lVar7 + -8);
        _swift_bridgeObjectRetain();
        (*pcVar8)(param_1 + 1,param_2 + 1,lVar7);
        uVar5 = 3;
      }
      else {
        if (iVar3 != 4) goto LAB_100274e00;
        lVar7 = *param_2;
        lVar1 = param_2[1];
        FUN_100008184(lVar7,lVar1);
        *param_1 = lVar7;
        param_1[1] = lVar1;
        param_1[2] = param_2[2];
        _swift_bridgeObjectRetain();
        uVar5 = 4;
      }
    }
    else if (iVar3 < 8) {
      if (iVar3 == 5) {
        *param_1 = *param_2;
        lVar7 = param_2[4];
        param_1[5] = param_2[5];
        param_1[4] = lVar7;
        pcVar8 = (code *)**(undefined8 **)(lVar7 + -8);
        _swift_bridgeObjectRetain();
        (*pcVar8)(param_1 + 1,param_2 + 1,lVar7);
        param_1[6] = param_2[6];
        _swift_bridgeObjectRetain();
        uVar5 = 5;
      }
      else if (iVar3 == 6) {
        lVar7 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
        uVar5 = 6;
      }
      else {
        if (iVar3 != 7) goto LAB_100274e00;
        *param_1 = *param_2;
        _swift_bridgeObjectRetain();
        uVar5 = 7;
      }
    }
    else if (iVar3 == 8) {
      lVar7 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar7;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar7);
      uVar5 = 8;
    }
    else if (iVar3 == 9) {
      lVar7 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar7;
      _swift_retain();
      uVar5 = 9;
    }
    else {
      if (iVar3 != 10) goto LAB_100274e00;
      *param_1 = *param_2;
      lVar7 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = lVar7;
      pcVar8 = (code *)**(undefined8 **)(lVar7 + -8);
      _swift_bridgeObjectRetain();
      (*pcVar8)(param_1 + 1,param_2 + 1,lVar7);
      lVar7 = param_2[7];
      param_1[6] = param_2[6];
      param_1[7] = lVar7;
      _swift_retain();
      uVar5 = 10;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar5);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar6 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar7 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

