// rea decompile_all
// name: FUN_100694c28
// address: 0x100694c28
// body: available
// range: 0x100694c28-0x100694e2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100694c28(ulong *param_1,wchar_t *param_2)

{
  wstring *this;
  size_t sVar1;
  ulong uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  wstring *pwVar9;
  wstring *pwVar10;
  long lVar11;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  
  this = (wstring *)(param_1 + 1);
  uVar8 = *param_1;
  uVar7 = (ulong)*(char *)((long)param_1 + 0x1f);
  uVar6 = uVar7;
  pwVar9 = this;
  if ((long)uVar7 < 0) {
    uVar6 = param_1[2];
    pwVar9 = (wstring *)param_1[1];
  }
  sVar1 = *(size_t *)(param_2 + 2);
  pwVar3 = *(wchar_t **)param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    sVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    pwVar3 = param_2;
  }
  if (uVar8 < uVar6) {
    pwVar10 = pwVar9 + uVar8 * 4;
    if (sVar1 == 0) {
LAB_100694cc8:
      if ((long)pwVar10 - (long)pwVar9 != -4) {
        uVar6 = (long)pwVar10 - (long)pwVar9 >> 2;
        if (((uint)uVar7 >> 7 & 1) == 0) {
          uVar8 = uVar7 & 0xff;
          pwVar9 = this;
        }
        else {
          pwVar9 = (wstring *)param_1[1];
          uVar8 = param_1[2];
        }
        uVar2 = *(ulong *)(param_2 + 2);
        pwVar3 = *(wchar_t **)param_2;
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
          pwVar3 = param_2;
        }
        if (uVar6 < uVar8 && uVar2 != 0) {
          pwVar10 = pwVar9 + uVar6 * 4;
          do {
            lVar11 = uVar2 << 2;
            pwVar4 = pwVar3;
            do {
              if (*(wchar_t *)pwVar10 == *pwVar4) {
                if ((pwVar10 == pwVar9 + uVar8 * 4) || ((long)pwVar10 - (long)pwVar9 == -4))
                goto LAB_100694d2c;
                uVar7 = (long)pwVar10 - (long)pwVar9 >> 2;
                std::wstring::wstring
                          (this,(wstring *)&local_70,(ulong)this,uVar6,(allocator *)(uVar7 - uVar6))
                ;
                if (*(char *)((long)param_1 + 0x37) < '\0') {
                  operator_delete((void *)param_1[4]);
                }
                param_1[5] = uStack_68;
                param_1[4] = local_70;
                param_1[6] = local_60;
                goto LAB_100694e0c;
              }
              pwVar4 = pwVar4 + 1;
              lVar11 = lVar11 + -4;
            } while (lVar11 != 0);
            pwVar10 = pwVar10 + 4;
          } while (pwVar10 != pwVar9 + uVar8 * 4);
        }
LAB_100694d2c:
        if (((uint)uVar7 >> 7 & 1) == 0) {
          uVar7 = uVar7 & 0xff;
        }
        else {
          uVar7 = param_1[2];
        }
        std::wstring::wstring
                  (this,(wstring *)&local_70,(ulong)this,uVar6,(allocator *)(uVar7 - uVar6));
        if (*(char *)((long)param_1 + 0x37) < '\0') {
          operator_delete((void *)param_1[4]);
        }
        param_1[5] = uStack_68;
        param_1[4] = local_70;
        param_1[6] = local_60;
        uVar7 = (ulong)*(char *)((long)param_1 + 0x1f);
        if ((long)uVar7 < 0) {
          uVar7 = param_1[2];
        }
LAB_100694e0c:
        uVar5 = 1;
        goto LAB_100694e10;
      }
    }
    else {
      lVar11 = uVar6 * 4 + uVar8 * -4;
      do {
        pwVar4 = _wmemchr(pwVar3,*(wchar_t *)pwVar10,sVar1);
        if (pwVar4 == (wchar_t *)0x0) {
          uVar7 = (ulong)*(byte *)((long)param_1 + 0x1f);
          goto LAB_100694cc8;
        }
        pwVar10 = pwVar10 + 4;
        lVar11 = lVar11 + -4;
      } while (lVar11 != 0);
      uVar7 = (ulong)*(byte *)((long)param_1 + 0x1f);
    }
  }
  uVar5 = 0;
  if (((uint)uVar7 >> 7 & 1) == 0) {
    uVar7 = uVar7 & 0xff;
  }
  else {
    uVar7 = param_1[2];
  }
LAB_100694e10:
  *param_1 = uVar7;
  return uVar5;
}

