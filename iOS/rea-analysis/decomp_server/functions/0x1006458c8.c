// rea decompile_all
// name: FUN_1006458c8
// address: 0x1006458c8
// body: available
// range: 0x1006458c8-0x100645ccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1006458c8(long param_1,long param_2,ulong param_3,long param_4,long param_5,long param_6,
                  ulong param_7,long param_8)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_1;
  FUN_10065f798();
  if (0x3f < lVar3) {
    lVar3 = param_1;
    FUN_10064b1b4(param_1,param_2,param_3,param_4,0,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
LAB_1006459e8:
    if (lVar3 == 0) goto LAB_100645aa8;
    cVar1 = (char)param_7;
    lVar3 = param_1;
    FUN_10065fef8(param_1,param_2,param_3,param_4);
    _swift_bridgeObjectRetain(param_8);
    FUN_10064fbe0(param_1,param_2,param_3,param_4,lVar3);
    FUN_10064d170();
    _swift_bridgeObjectRelease(param_4);
    param_7 = param_7 & 0xff;
    lVar3 = param_5;
    FUN_10065f798(param_5,param_6,param_7,param_8);
    if (0x3f < lVar3) {
      FUN_10064b1b4(param_5,param_6,param_7,param_8,0,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
      _swift_bridgeObjectRelease(param_8);
      lVar3 = param_5;
      goto LAB_100645c8c;
    }
    if (cVar1 == '\0') {
      if (param_6 == 0 && param_5 == 0) goto LAB_100645c50;
      lVar3 = 0;
      FUN_1006605e8(0,param_5,param_6,0,param_8);
      _swift_bridgeObjectRelease(param_8);
      if (param_6 != 0) goto LAB_100645c8c;
      uVar4 = (ulong)(param_5 != 0);
LAB_100645c84:
      if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100645cc0);
        (*pcVar2)();
      }
      goto LAB_100645c8c;
    }
    if (cVar1 != '\x01') {
      if (*(long *)(param_8 + 0x10) == 0) goto LAB_100645c50;
      lVar3 = 0;
      FUN_1006605e8(0,param_5,param_6,param_7,param_8);
      if (cVar1 == '\x02') {
        uVar4 = *(ulong *)(param_8 + 0x10);
        _swift_bridgeObjectRelease(param_8);
        goto LAB_100645c84;
      }
LAB_100645c74:
      _swift_bridgeObjectRelease(param_8);
      uVar4 = param_6 - param_5;
      if (SBORROW8(param_6,param_5)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100645cd0);
        (*pcVar2)();
      }
      goto LAB_100645c84;
    }
    if (SBORROW8(param_6,param_5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100645cc8);
      (*pcVar2)();
    }
    if (param_6 != param_5) {
      lVar3 = 0;
      FUN_1006605e8(0,param_5,param_6,param_7,param_8);
      goto LAB_100645c74;
    }
LAB_100645c50:
    _swift_bridgeObjectRelease(param_8);
    goto LAB_100645c58;
  }
  if ((param_3 & 0xff) == 0) {
    if (param_2 == 0 && param_1 == 0) goto LAB_100645aa8;
    lVar3 = 0;
    FUN_1006605e8(0,param_1,param_2,0,param_4);
    if (param_2 != 0) goto LAB_1006459e8;
    uVar4 = (ulong)(param_1 != 0);
LAB_1006459e0:
    if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100645cb4);
      (*pcVar2)();
    }
    goto LAB_1006459e8;
  }
  if (((uint)param_3 & 0xff) == 1) {
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100645cb8);
      (*pcVar2)();
    }
    if (param_2 != param_1) {
      lVar3 = 0;
      FUN_1006605e8(0,param_1,param_2,param_3,param_4);
LAB_1006459d8:
      uVar4 = param_2 - param_1;
      if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100645cbc);
        (*pcVar2)();
      }
      goto LAB_1006459e0;
    }
  }
  else if (*(long *)(param_4 + 0x10) != 0) {
    lVar3 = 0;
    FUN_1006605e8(0,param_1,param_2,param_3,param_4);
    if (((uint)param_3 & 0xff) == 2) {
      uVar4 = *(ulong *)(param_4 + 0x10);
      goto LAB_1006459e0;
    }
    goto LAB_1006459d8;
  }
LAB_100645aa8:
  lVar3 = param_5;
  FUN_10065f798(param_5,param_6,param_7,param_8);
  if (0x3f < lVar3) {
    FUN_10064b1b4(param_5,param_6,param_7,param_8,0,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
    lVar3 = param_5;
    goto LAB_100645c8c;
  }
  if ((param_7 & 0xff) == 0) {
    if (param_6 == 0 && param_5 == 0) goto LAB_100645c58;
    lVar3 = 0;
    FUN_1006605e8(0,param_5,param_6,0,param_8);
    if (param_6 != 0) goto LAB_100645c8c;
    uVar4 = (ulong)(param_5 != 0);
LAB_100645c68:
    if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100645c74);
      (*pcVar2)();
    }
  }
  else {
    if (((uint)param_7 & 0xff) == 1) {
      if (SBORROW8(param_6,param_5)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100645cc4);
        (*pcVar2)();
      }
      if (param_6 != param_5) {
        lVar3 = 0;
        FUN_1006605e8(0,param_5,param_6,param_7,param_8);
LAB_100645c60:
        uVar4 = param_6 - param_5;
        if (SBORROW8(param_6,param_5)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100645ccc);
          (*pcVar2)();
        }
        goto LAB_100645c68;
      }
    }
    else if (*(long *)(param_8 + 0x10) != 0) {
      lVar3 = 0;
      FUN_1006605e8(0,param_5,param_6,param_7,param_8);
      if (((uint)param_7 & 0xff) == 2) {
        uVar4 = *(ulong *)(param_8 + 0x10);
        goto LAB_100645c68;
      }
      goto LAB_100645c60;
    }
LAB_100645c58:
    lVar3 = 0;
  }
LAB_100645c8c:
  return lVar3 == 0;
}

