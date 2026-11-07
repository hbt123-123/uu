// rea decompile_all
// name: FUN_100634a64
// address: 0x100634a64
// body: available
// range: 0x100634a64-0x100634cb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100634a64(undefined8 param_1,long param_2,ulong param_3,ulong param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *unaff_x20;
  ulong uVar11;
  size_t sVar12;
  undefined8 local_88;
  long lStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  
  uVar11 = param_4 >> 1;
  sVar12 = uVar11 - param_3;
  if (SBORROW8(uVar11,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100634c8c);
    (*pcVar3)();
  }
  lVar6 = unaff_x20[2];
  uVar7 = (ulong)unaff_x20[3] >> 1;
  lVar5 = uVar7 - lVar6;
  if (SBORROW8(uVar7,lVar6)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100634c90);
    (*pcVar3)();
  }
  lVar10 = lVar5;
  if ((unaff_x20[3] & 1) != 0) {
    puVar1 = (undefined *)*unaff_x20;
    lVar2 = unaff_x20[1];
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar4 = puVar1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (puVar4 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar1);
      puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar8 = *(long *)(puVar4 + 0x10);
    if ((undefined *)(lVar2 + lVar6 + lVar5) == puVar4 + lVar8 + 0x20) {
      uVar7 = *(ulong *)(puVar4 + 0x18);
      _swift_release();
      lVar8 = (uVar7 >> 1) - lVar8;
      lVar10 = lVar5 + lVar8;
      if (SCARRY8(lVar5,lVar8)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100634cac);
        (*pcVar3)();
      }
    }
    else {
      _swift_release();
    }
  }
  lVar6 = lVar5 + sVar12;
  if (SCARRY8(lVar5,sVar12)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100634c94);
    (*pcVar3)();
  }
  lVar5 = lVar6;
  if (lVar10 < lVar6) {
    if (lVar10 + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100634ca4);
      (*pcVar3)();
    }
    lVar5 = lVar10 * 2;
    if (lVar5 - lVar6 == 0 || lVar5 < lVar6) {
      lVar5 = lVar6;
    }
  }
  (*param_5)(lVar5);
  lVar6 = unaff_x20[2];
  uVar7 = (ulong)unaff_x20[3] >> 1;
  lVar5 = uVar7 - lVar6;
  if (SBORROW8(uVar7,lVar6)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100634c98);
    (*pcVar3)();
  }
  puVar1 = (undefined *)(unaff_x20[1] + lVar6 + lVar5);
  lVar6 = lVar5;
  if ((unaff_x20[3] & 1) != 0) {
    puVar9 = (undefined *)*unaff_x20;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar4 = puVar9;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (puVar4 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar9);
      puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar10 = *(long *)(puVar4 + 0x10);
    if (puVar1 == puVar4 + lVar10 + 0x20) {
      uVar7 = *(ulong *)(puVar4 + 0x18);
      _swift_release();
      lVar10 = (uVar7 >> 1) - lVar10;
      lVar6 = lVar5 + lVar10;
      if (SCARRY8(lVar5,lVar10)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100634cb0);
        (*pcVar3)();
      }
    }
    else {
      _swift_release();
    }
  }
  if (!SBORROW8(lVar6,lVar5)) {
    if (uVar11 == param_3) {
      if (0 < (long)sVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100634ca0);
        (*pcVar3)();
      }
      sVar12 = 0;
      uVar11 = param_3;
    }
    else {
      if (lVar6 - lVar5 < (long)sVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100634ca8);
        (*pcVar3)();
      }
      _memcpy(puVar1,(void *)(param_2 + param_3),sVar12);
      if (0 < (long)sVar12) {
        if (SCARRY8(lVar5,sVar12)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100634cb4);
          (*pcVar3)();
        }
        FUN_100633d94(lVar5 + sVar12);
      }
    }
    if (sVar12 == lVar6 - lVar5) {
      local_88 = param_1;
      lStack_80 = param_2;
      local_78 = param_3;
      uStack_70 = param_4;
      local_68 = uVar11;
      FUN_10063473c(&local_88,param_6,param_7,param_8);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100634c9c);
  (*pcVar3)();
}

