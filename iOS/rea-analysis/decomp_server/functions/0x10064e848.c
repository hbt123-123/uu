// rea decompile_all
// name: FUN_10064e848
// address: 0x10064e848
// body: available
// range: 0x10064e848-0x10064ebd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064e848(long param_1,long param_2,uint param_3,long param_4,long param_5,long param_6,
                  ulong param_7,long param_8)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 in_stack_00000018;
  undefined8 local_98;
  undefined *local_78;
  
  local_78 = PTR___swiftEmptyArrayStorage_100995ea0;
  if ((param_7 & 0xff) == 0) {
    if (param_5 == 0 && param_6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10064ebd8);
      (*pcVar1)();
    }
  }
  else if ((((uint)param_7 & 0xff) != 1) && (*(long *)(param_8 + 0x10) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10064e8a0);
    (*pcVar1)();
  }
  lVar2 = param_5;
  FUN_10064b1b4(param_5,param_6,param_7,param_8,1,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
  if (lVar2 != 0) {
    lVar2 = param_5;
    FUN_10065fef8(param_5,param_6,param_7,param_8);
    FUN_10064fbe0(param_5,param_6,param_7,param_8,lVar2);
    local_98 = in_stack_00000018;
    _swift_bridgeObjectRetain(in_stack_00000018);
    FUN_10064d170(param_5,param_6,param_7,param_8,lVar2);
    _swift_bridgeObjectRetain(param_4);
    uVar6 = 0;
    while (uVar7 = uVar6, (param_3 & 0xff) != 0) {
      if ((param_3 & 0xff) == 1) {
        uVar5 = param_2 - param_1;
        if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10064ebd0);
          (*pcVar1)();
        }
      }
      else {
        uVar5 = *(ulong *)(param_4 + 0x10);
      }
      if (uVar6 == uVar5) goto LAB_10064eb74;
      FUN_1006605e8(uVar6,param_1,param_2,param_3,param_4);
      if ((param_3 & 0xff) == 2) {
        uVar5 = *(ulong *)(param_4 + 0x10);
      }
      else {
        uVar5 = param_2 - param_1;
        if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10064ebd4);
          (*pcVar1)();
        }
      }
LAB_10064ea78:
      if ((long)uVar5 <= (long)uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10064ebcc);
        (*pcVar1)();
      }
      lVar8 = 0x40;
      do {
        if ((uVar7 & 1) != 0) {
          puVar4 = local_78;
          FUN_1006527dc();
          _swift_bridgeObjectRelease(local_78);
          FUN_10064d170(param_5,param_6,param_7,param_8,lVar2);
          local_78 = puVar4;
        }
        uVar7 = uVar7 >> 1;
        _swift_bridgeObjectRetain(local_98);
        uVar3 = local_98;
        FUN_1006527dc();
        _swift_bridgeObjectRelease_n(local_98,2);
        FUN_10064d170(param_5,param_6,param_7,param_8,lVar2);
        lVar8 = lVar8 + -1;
        local_98 = uVar3;
      } while (lVar8 != 0);
      uVar6 = uVar6 + 1;
    }
    if (param_2 == 0) {
      uVar5 = (ulong)(param_1 != 0);
      if (param_1 == 0) {
        if (uVar6 != 0) goto LAB_10064ea60;
      }
      else if (uVar6 != 1) {
LAB_10064ea60:
        FUN_1006605e8(uVar6,param_1,param_2,0,param_4);
        goto LAB_10064ea78;
      }
    }
    else if (uVar6 != 2) {
      uVar5 = 2;
      goto LAB_10064ea60;
    }
LAB_10064eb74:
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_8);
    _swift_bridgeObjectRelease(local_98);
  }
  return;
}

