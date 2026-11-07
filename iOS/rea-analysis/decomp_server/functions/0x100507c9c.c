// rea decompile_all
// name: FUN_100507c9c
// address: 0x100507c9c
// body: available
// range: 0x100507c9c-0x100507ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100507c9c(void *param_1,ulong param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  void *pvVar5;
  undefined1 *puVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  ulong uVar11;
  void *local_70;
  ulong uStack_68;
  
  if ((param_2 >> 0x3c & 1) != 0) {
    pvVar8 = param_1;
    __sSS8UTF8ViewV13_foreignCountSiyF();
    pbVar4 = (byte *)*unaff_x20;
    pvVar5 = pvVar8;
    pbVar3 = pbVar4;
    if ((void *)0x7f < pvVar8) {
      do {
        pbVar4 = pbVar3 + 1;
        *pbVar3 = (byte)pvVar5 | 0x80;
        pvVar8 = (void *)((ulong)pvVar5 >> 7);
        uVar10 = (ulong)pvVar5 >> 0xe;
        pvVar5 = pvVar8;
        pbVar3 = pbVar4;
      } while (uVar10 != 0);
    }
    *pbVar4 = (byte)pvVar8;
    *unaff_x20 = (long)(pbVar4 + 1);
    uVar10 = (ulong)param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar10 = param_2 >> 0x38 & 0xf;
    }
    if (uVar10 == 0) {
      return;
    }
    uVar11 = 0xf;
    do {
      if ((uVar11 & 0xc) == 4L << ((ulong)param_1 >> 0x3b & 1)) {
        uVar7 = uVar11;
        FUN_10000caa8(uVar11,param_1,param_2);
        if (uVar10 <= uVar7 >> 0x10) goto LAB_100507ea4;
        __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
        uVar2 = (undefined1)uVar7;
        FUN_10000caa8(uVar11,param_1,param_2);
      }
      else {
        if (uVar10 <= uVar11 >> 0x10) {
LAB_100507ea4:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100507ea8);
          (*pcVar1)();
        }
        uVar7 = uVar11;
        __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar11,param_1,param_2);
        uVar2 = (undefined1)uVar7;
      }
      if (uVar10 <= uVar11 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100507e94);
        (*pcVar1)();
      }
      __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar11,param_1,param_2);
      puVar6 = (undefined1 *)*unaff_x20;
      *puVar6 = uVar2;
      *unaff_x20 = (long)(puVar6 + 1);
      if (uVar10 * 4 - (uVar11 >> 0xe) == 0) {
        return;
      }
    } while( true );
  }
  if ((param_2 >> 0x3d & 1) == 0) {
    if (((ulong)param_1 >> 0x3c & 1) == 0) {
      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      uVar10 = param_2;
    }
    else {
      uVar10 = (ulong)param_1 & 0xffffffffffff;
      param_1 = (void *)((param_2 & 0xfffffffffffffff) + 0x20);
    }
    pbVar3 = (byte *)*unaff_x20;
    pbVar4 = pbVar3;
    uVar11 = uVar10;
    uVar7 = uVar10;
    if (0x7f < uVar10) {
      do {
        pbVar4 = pbVar3 + 1;
        *pbVar3 = (byte)uVar11 | 0x80;
        uVar7 = uVar11 >> 7;
        uVar9 = uVar11 >> 0xe;
        pbVar3 = pbVar4;
        uVar11 = uVar7;
      } while (uVar9 != 0);
    }
    pbVar3 = pbVar4 + 1;
    *pbVar4 = (byte)uVar7;
    *unaff_x20 = (long)pbVar3;
    if (param_1 == (void *)0x0) {
      uVar10 = 0;
      goto LAB_100507d58;
    }
    if ((long)uVar10 < 1) goto LAB_100507d58;
    _memmove(pbVar3,param_1,uVar10);
  }
  else {
    uVar10 = param_2 >> 0x38 & 0xf;
    uStack_68 = param_2 & 0xffffffffffffff;
    pbVar3 = (undefined1 *)*unaff_x20 + 1;
    *(undefined1 *)*unaff_x20 = (char)uVar10;
    *unaff_x20 = (long)pbVar3;
    if (uVar10 == 0) goto LAB_100507d58;
    local_70 = param_1;
    _memcpy(pbVar3,&local_70,uVar10);
  }
  pbVar3 = (byte *)*unaff_x20;
LAB_100507d58:
  *unaff_x20 = (long)(pbVar3 + uVar10);
  return;
}

