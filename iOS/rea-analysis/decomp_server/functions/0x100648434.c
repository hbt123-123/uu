// rea decompile_all
// name: FUN_100648434
// address: 0x100648434
// body: available
// range: 0x100648434-0x1006486f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100648434(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  char cVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_120;
  long lStack_118;
  char local_110;
  ulong local_108;
  ulong local_f8;
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [48];
  long local_90;
  long lStack_88;
  long local_80;
  long local_78;
  char local_70;
  
  lVar12 = param_2[1];
  lVar11 = *param_2;
  lVar13 = param_2[3];
  local_80 = param_2[2];
  local_70 = (char)param_2[4];
  cVar2 = (char)local_80;
  local_90 = lVar11;
  lStack_88 = lVar12;
  local_78 = lVar13;
  FUN_1006612a4(auStack_f0,&local_90);
  FUN_1006612a4(auStack_c0,param_3);
  if (cVar2 == '\0') {
    uVar4 = (ulong)(lVar11 != 0);
    if (lVar12 != 0) {
      uVar4 = 2;
    }
  }
  else if (cVar2 == '\x01') {
    uVar4 = lVar12 - lVar11;
    if (SBORROW8(lVar12,lVar11)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006484a8);
      (*pcVar3)();
    }
  }
  else {
    uVar4 = *(ulong *)(lVar13 + 0x10);
  }
  lVar11 = *param_3;
  lVar12 = param_3[1];
  if ((char)param_3[2] == '\0') {
    uVar10 = uVar4;
    if ((long)uVar4 < 2) {
      uVar10 = 1;
    }
    uVar7 = uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU);
    if (lVar11 != 0) {
      uVar7 = uVar10;
    }
    if ((long)uVar4 < 3) {
      uVar4 = 2;
    }
    if (lVar12 != 0) {
      uVar7 = uVar4;
    }
  }
  else {
    if ((char)param_3[2] == '\x01') {
      uVar7 = lVar12 - lVar11;
      if (SBORROW8(lVar12,lVar11)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006484e4);
        (*pcVar3)();
      }
    }
    else {
      uVar7 = *(ulong *)(param_3[3] + 0x10);
    }
    if ((long)uVar7 <= (long)uVar4) {
      uVar7 = uVar4;
    }
  }
  FUN_100643424(&local_90,&local_120);
  FUN_100643424(param_3,&local_120);
  uVar4 = 0;
  FUN_10062958c(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0,
                PTR___swiftEmptyArrayStorage_100995ea0);
  local_f8 = uVar4;
  if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006486f4);
    (*pcVar3)();
  }
  if (uVar7 == 0) {
    FUN_100644548(auStack_f0);
    FUN_100644548(auStack_c0);
  }
  else {
    uVar10 = 0;
    uVar9 = uVar4;
    do {
      uVar5 = uVar10;
      FUN_10065fa88();
      uVar6 = uVar10;
      FUN_10065fa88();
      uVar1 = *(ulong *)(uVar9 + 0x10);
      uVar4 = uVar9;
      if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
        FUN_10062958c(uVar4,uVar1 + 1,1,uVar9);
      }
      uVar10 = uVar10 + 1;
      *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
      *(ulong *)(uVar4 + uVar1 * 8 + 0x20) = uVar6 & uVar5;
      uVar9 = uVar4;
    } while (uVar7 != uVar10);
    FUN_100644548(auStack_f0);
    FUN_100644548(auStack_c0);
    local_f8 = uVar4;
  }
  if ((local_70 != '\x01') || ((char)param_3[4] != '\x01')) {
    local_120 = 0;
    lStack_118 = 0;
    local_110 = '\x02';
    local_108 = uVar4;
    FUN_100645d2c();
    uVar8 = 0;
    goto LAB_100648688;
  }
  FUN_10065fc5c();
  local_120 = 0;
  lStack_118 = 0;
  local_110 = '\x02';
  local_108 = local_f8;
  FUN_100645d2c();
  if (local_110 == '\0') {
    if (local_120 != 0 || lStack_118 != 0) {
      local_110 = '\0';
      uVar8 = 1;
      goto LAB_100648688;
    }
  }
  else {
    if (local_110 == '\x01') {
      uVar8 = 1;
      goto LAB_100648688;
    }
    if (*(long *)(local_108 + 0x10) != 0) {
      uVar8 = 1;
      local_110 = '\x02';
      goto LAB_100648688;
    }
  }
  uVar8 = 0;
LAB_100648688:
  param_1[1] = lStack_118;
  *param_1 = local_120;
  *(char *)(param_1 + 2) = local_110;
  param_1[3] = local_108;
  *(undefined1 *)(param_1 + 4) = uVar8;
  return;
}

