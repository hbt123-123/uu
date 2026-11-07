// rea decompile_all
// name: FUN_100662e80
// address: 0x100662e80
// body: available
// range: 0x100662e80-0x1006631bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100662e80(undefined8 param_1,long param_2,ulong param_3,ulong param_4,ulong *param_5,
                   long param_6)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong local_70;
  long local_68;
  
  uVar13 = *param_5;
  if (*(long *)(uVar13 + 0x10) != 0x10) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1006631b0);
    (*pcVar6)();
  }
  if (*(long *)(param_6 + 0x10) != 0x20) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1006631b4);
    (*pcVar6)();
  }
  lVar7 = 0x40;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (0x40,PTR___ss5UInt8VN_100995d40);
  *(undefined8 *)(lVar7 + 0x10) = 0x40;
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(undefined8 *)(lVar7 + 0x20) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x58) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  param_4 = param_4 >> 1;
  uVar9 = param_4 - param_3;
  local_68 = lVar7;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1006631b8);
    (*pcVar6)();
  }
  uVar8 = 0;
  FUN_1006295a0(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0,
                PTR___swiftEmptyArrayStorage_100995ea0);
  _swift_unknownObjectRetain(param_1);
  local_70 = param_3;
  if (0x3f < (long)uVar9) {
    do {
      FUN_100662768(&local_68,uVar13,param_6);
      lVar7 = local_68;
      lVar12 = *(long *)(local_68 + 0x10);
      if (lVar12 != 0) {
        pbVar10 = (byte *)(local_68 + 0x20);
        uVar11 = uVar8;
        uVar9 = local_70;
        do {
          if ((long)param_4 <= (long)uVar9) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100663188);
            (*pcVar6)();
          }
          bVar4 = *pbVar10;
          bVar5 = *(byte *)(param_2 + uVar9);
          uVar3 = *(ulong *)(uVar11 + 0x10);
          uVar8 = uVar11;
          if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar3) {
            uVar8 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
            FUN_1006295a0(uVar8,uVar3 + 1,1,uVar11);
          }
          *(ulong *)(uVar8 + 0x10) = uVar3 + 1;
          *(byte *)(uVar8 + uVar3 + 0x20) = bVar5 ^ bVar4;
          uVar9 = uVar9 + 1;
          lVar12 = lVar12 + -1;
          pbVar10 = pbVar10 + 1;
          uVar11 = uVar8;
        } while (lVar12 != 0);
      }
      if (*(long *)(uVar13 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100663190);
        (*pcVar6)();
      }
      bVar4 = *(byte *)(uVar13 + 0x20);
      uVar9 = uVar13;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar9 & 1) == 0) {
        FUN_1006541b8();
      }
      uVar1 = bVar4 + 1;
      *(char *)(uVar13 + 0x20) = (char)uVar1;
      uVar9 = *(ulong *)(uVar13 + 0x10);
      if (uVar9 < 2) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100663194);
        (*pcVar6)();
      }
      uVar1 = (uint)*(byte *)(uVar13 + 0x21) + (uVar1 >> 8);
      *(char *)(uVar13 + 0x21) = (char)uVar1;
      if (uVar9 == 2) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100663198);
        (*pcVar6)();
      }
      iVar2 = (uint)*(byte *)(uVar13 + 0x22) + (uVar1 >> 8);
      *(char *)(uVar13 + 0x22) = (char)iVar2;
      if (uVar9 < 4) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10066319c);
        (*pcVar6)();
      }
      *(char *)(uVar13 + 0x23) = *(char *)(uVar13 + 0x23) + (char)((uint)iVar2 >> 8);
      if (SCARRY8(local_70,0x40)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1006631a0);
        (*pcVar6)();
      }
      param_3 = local_70 + 0x40;
      if ((long)param_4 < (long)param_3) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1006631a4);
        (*pcVar6)();
      }
      if ((long)param_3 < (long)local_70) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1006631a8);
        (*pcVar6)();
      }
      if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1006631ac);
        (*pcVar6)();
      }
      local_70 = param_3;
    } while (0x3f < (long)(param_4 - param_3));
    *param_5 = uVar13;
  }
  if (param_4 == param_3) {
    _swift_bridgeObjectRelease(lVar7);
  }
  else {
    FUN_100662768(&local_68,uVar13,param_6);
    lVar7 = local_68;
    if ((long)param_4 <= (long)param_3) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1006631bc);
      (*pcVar6)();
    }
    _swift_unknownObjectRetain(param_1);
    uVar13 = 0;
    uVar9 = uVar8;
    do {
      if (*(ulong *)(lVar7 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10066318c);
        (*pcVar6)();
      }
      bVar5 = *(byte *)(param_2 + param_3 + uVar13);
      bVar4 = *(byte *)(lVar7 + uVar13 + 0x20);
      uVar11 = *(ulong *)(uVar9 + 0x10);
      uVar8 = uVar9;
      if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar11) {
        uVar8 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
        FUN_1006295a0(uVar8,uVar11 + 1,1,uVar9);
      }
      uVar13 = uVar13 + 1;
      *(ulong *)(uVar8 + 0x10) = uVar11 + 1;
      *(byte *)(uVar8 + uVar11 + 0x20) = bVar4 ^ bVar5;
      uVar9 = uVar8;
    } while (param_4 - param_3 != uVar13);
    _swift_bridgeObjectRelease(lVar7);
    _swift_unknownObjectRelease(param_1);
  }
  _swift_unknownObjectRelease(param_1);
  return uVar8;
}

