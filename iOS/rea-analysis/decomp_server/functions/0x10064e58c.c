// rea decompile_all
// name: FUN_10064e58c
// address: 0x10064e58c
// body: available
// range: 0x10064e58c-0x10064e847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10064e58c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,long param_5)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 local_68;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_1 == 1) goto LAB_10064e5cc;
  uVar5 = (uint)param_4;
  if ((long)param_1 < 0) {
    if ((param_4 & 0xff) == 0) {
      if (param_2 == 0 && param_3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10064e844);
        (*pcVar2)();
      }
    }
    else if (((uVar5 & 0xff) != 1) && (*(long *)(param_5 + 0x10) == 0)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10064e64c);
      (*pcVar2)();
    }
    FUN_10064b1b4(param_2,param_3,param_4,param_5,1,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
    return (ulong)(param_2 == 0);
  }
  uVar8 = param_2;
  FUN_10065f798(param_2,param_3,param_4,param_5);
  if (0x3f < (long)uVar8) {
    lVar3 = 1;
    FUN_10064b1b4(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,param_2,param_3,param_4,param_5);
    if (lVar3 != -1) goto LAB_10064e5cc;
    goto LAB_10064e730;
  }
  if ((param_4 & 0xff) == 0) {
    if (param_3 == 0 && param_2 == 0) goto LAB_10064e5cc;
    uVar8 = param_2;
    if (param_3 == 0 && param_2 == 0) goto LAB_10064e844;
  }
  else {
    if ((uVar5 & 0xff) == 1) {
      if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10064e834);
        (*pcVar2)();
      }
      if (param_3 == param_2) goto LAB_10064e5cc;
LAB_10064e6fc:
      if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10064e838);
        (*pcVar2)();
      }
      if ((long)(param_3 - param_2) < 1) {
LAB_10064e844:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10064e848);
        (*pcVar2)();
      }
      if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10064e83c);
        (*pcVar2)();
      }
      if (*(ulong *)(param_5 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10064e840);
        (*pcVar2)();
      }
      lVar3 = param_5 + param_2 * 8;
    }
    else {
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_10064e5cc;
      lVar3 = param_5;
      if ((uVar5 & 0xff) != 2) goto LAB_10064e6fc;
    }
    uVar8 = *(ulong *)(lVar3 + 0x20);
  }
  if (1 < (long)uVar8) {
LAB_10064e730:
    _swift_bridgeObjectRetain(param_5);
    local_68 = 0;
    uVar6 = 0;
    uVar8 = 1;
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    do {
      puVar4 = puVar7;
      if ((param_1 & 1) != 0) {
        FUN_1006527dc(uVar8,local_68,uVar6,puVar7,param_2,param_3,param_4,param_5);
        _swift_bridgeObjectRelease(puVar7);
      }
      lVar3 = param_5;
      FUN_1006527dc();
      _swift_bridgeObjectRelease(param_5);
      bVar1 = 1 < param_1;
      param_5 = lVar3;
      param_1 = param_1 >> 1;
      puVar7 = puVar4;
    } while (bVar1);
    _swift_bridgeObjectRelease(lVar3);
    return uVar8;
  }
LAB_10064e5cc:
  _swift_bridgeObjectRetain(param_5);
  return param_2;
}

