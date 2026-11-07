// rea decompile_all
// name: FUN_100628ce8
// address: 0x100628ce8
// body: available
// range: 0x100628ce8-0x1006290cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100628ce8(long param_1,long param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long local_88;
  long lStack_80;
  char local_78;
  long local_70;
  ulong local_68;
  
  if ((param_3 & 0xff) == 0) {
    uVar8 = (ulong)(param_1 != 0);
    if (param_2 != 0) {
      uVar8 = 2;
    }
  }
  else if (((uint)param_3 & 0xff) == 1) {
    uVar8 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100628e78);
      (*pcVar1)();
    }
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100628d38);
      (*pcVar1)();
    }
  }
  else {
    uVar8 = *(ulong *)(param_4 + 0x10);
  }
  uVar7 = *unaff_x20;
  lVar9 = *(long *)(uVar7 + 0x10);
  if (SCARRY8(lVar9,uVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100628e3c);
    (*pcVar1)();
  }
  uVar2 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)uVar2 == 0) ||
     (uVar4 = *(ulong *)(uVar7 + 0x18) >> 1, (long)uVar4 < (long)(lVar9 + uVar8))) {
    FUN_100507a40();
    uVar4 = *(ulong *)(uVar2 + 0x18) >> 1;
    uVar7 = uVar2;
  }
  plVar10 = (long *)(uVar4 - *(long *)(uVar7 + 0x10));
  plVar3 = &local_88;
  FUN_1006292bc(plVar3,param_1,param_2,param_3,param_4,uVar7 + *(long *)(uVar7 + 0x10) * 8 + 0x20,
                plVar10);
  _swift_bridgeObjectRelease(param_4);
  lVar9 = local_70;
  if ((long)plVar3 < (long)uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100628e40);
    (*pcVar1)();
  }
  if (plVar3 != (long *)0x0) {
    if (SCARRY8(*(long *)(uVar7 + 0x10),(long)plVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100628e74);
      (*pcVar1)();
    }
    *(long *)(uVar7 + 0x10) = *(long *)(uVar7 + 0x10) + (long)plVar3;
  }
  if (plVar3 == plVar10) {
    uVar8 = *(ulong *)(uVar7 + 0x10);
    uVar2 = local_68;
    if (local_78 == '\0') {
      if (lStack_80 == 0) {
        if (local_88 == 0) {
          if (local_68 == 0) goto LAB_100628e0c;
        }
        else if (local_68 == 1) goto LAB_100628e0c;
        FUN_1006605e8(local_68,local_88,0,0,local_70);
        uVar4 = (ulong)(local_88 != 0);
        goto LAB_100628f28;
      }
      if (local_68 != 2) {
        FUN_1006605e8(local_68,local_88,lStack_80,0,local_70);
        uVar4 = 2;
        goto LAB_100628f28;
      }
    }
    else {
      if (local_78 == '\x01') {
        uVar4 = lStack_80 - local_88;
        if (SBORROW8(lStack_80,local_88)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100628e70);
          (*pcVar1)();
        }
      }
      else {
        uVar4 = *(ulong *)(local_70 + 0x10);
      }
      if (local_68 != uVar4) {
        FUN_1006605e8(local_68,local_88,lStack_80,local_78,local_70);
        if (local_78 == '\x02') {
          uVar4 = *(ulong *)(lVar9 + 0x10);
        }
        else {
          uVar4 = lStack_80 - local_88;
          if (SBORROW8(lStack_80,local_88)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100628eec);
            (*pcVar1)();
          }
        }
LAB_100628f28:
        if (((long)local_68 < 0) || ((long)uVar4 <= (long)local_68)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006290cc);
          (*pcVar1)();
        }
        lVar11 = local_68 + 1;
        uVar4 = uVar7;
        do {
          while( true ) {
            uVar6 = *(ulong *)(uVar4 + 0x18) >> 1;
            if ((long)(uVar8 + 1) <= (long)uVar6) break;
            uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            FUN_100507a40(uVar7,uVar8 + 1,1,uVar4,&DAT_100ab7e10,&DAT_100848cb8);
            uVar6 = *(ulong *)(uVar7 + 0x18) >> 1;
            if ((long)uVar6 <= (long)uVar8) goto LAB_100628f5c;
LAB_100628f7c:
            lVar12 = 0;
            do {
              uVar4 = lVar11 + lVar12;
              *(ulong *)(uVar7 + uVar8 * 8 + 0x20 + lVar12 * 8) = uVar2;
              uVar2 = uVar4;
              if (local_78 == '\0') {
                if (lStack_80 == 0) {
                  uVar5 = (ulong)(local_88 != 0);
                  if ((local_88 == 0) || (uVar4 != 1)) goto LAB_100629020;
                }
                else if (uVar4 != 2) {
                  uVar5 = 2;
LAB_100629020:
                  FUN_1006605e8(uVar4,local_88,lStack_80,0,lVar9);
                  goto LAB_100629034;
                }
LAB_1006290a8:
                *(ulong *)(uVar7 + 0x10) = uVar8 + lVar12 + 1;
                goto LAB_100628e0c;
              }
              if (local_78 == '\x01') {
                uVar5 = lStack_80 - local_88;
                if (SBORROW8(lStack_80,local_88)) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006290c4);
                  (*pcVar1)();
                }
              }
              else {
                uVar5 = *(ulong *)(lVar9 + 0x10);
              }
              if (uVar4 == uVar5) goto LAB_1006290a8;
              FUN_1006605e8(uVar4,local_88,lStack_80,local_78,lVar9);
              if (local_78 == '\x02') {
                uVar5 = *(ulong *)(lVar9 + 0x10);
              }
              else {
                uVar5 = lStack_80 - local_88;
                if (SBORROW8(lStack_80,local_88)) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006290c8);
                  (*pcVar1)();
                }
              }
LAB_100629034:
              if ((lVar11 < 0) || ((long)uVar5 <= (long)uVar4)) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1006290c0);
                (*pcVar1)();
              }
              lVar12 = lVar12 + 1;
            } while ((uVar8 - uVar6) + lVar12 != 0);
            lVar11 = lVar11 + lVar12;
            *(ulong *)(uVar7 + 0x10) = uVar6;
            uVar4 = uVar7;
            uVar8 = uVar6;
          }
          uVar7 = uVar4;
          if ((long)uVar8 < (long)uVar6) goto LAB_100628f7c;
LAB_100628f5c:
          *(ulong *)(uVar7 + 0x10) = uVar8;
          uVar4 = uVar7;
        } while( true );
      }
    }
  }
LAB_100628e0c:
  _swift_bridgeObjectRelease(local_70);
  *unaff_x20 = uVar7;
  return;
}

